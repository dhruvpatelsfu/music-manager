#include <algorithm>
#include <iostream>
#include <random>

#include "MusicManager.h"

using namespace music;


std::deque<Song>
RemoteMusicLibrary::getSongs() {
  std::deque<Song> songs;
  // Big complicated logic connecting to a database.
  // Is the server glitchy? Is our MusicManager broken? It's not clear.
  std::cout << "Temperamental connection to database!\n";
  return songs;
}


void
LocalMusicPlayer::play(const Song &song) {
  // This could have lots of internal state & complex behavior for playing
  // music files. For now, we just fake the behavior by printing out a message.
  std::cout << "Playing " << song.title << "\n";
}


void
MusicManager::playSongBy(std::string const &artist) {
  std::deque<Song> allSongs = library.getSongs();
  std::deque<Song> byArtist;

  std::copy_if(allSongs.begin(), allSongs.end(), back_inserter(byArtist),
               [&artist] (const Song &song) { return song.artist == artist; });
  if (!byArtist.empty()) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<size_t> dis(0, byArtist.size() - 1);
    size_t index = dis(gen);
    const Song &song = byArtist[index];
    player.play(song);
  }
}


RemoteMusicLibrary MusicManager::library;
LocalMusicPlayer MusicManager::player;
