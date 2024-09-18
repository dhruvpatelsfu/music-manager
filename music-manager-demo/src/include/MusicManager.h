#ifndef MUSICMANAGER_H
#define MUSICMANAGER_H

#include <string>
#include <deque>

namespace music {


  struct Song {
    std::string artist;
    std::string album;
    std::string title;
    std::string location;

    Song(std::string artist, std::string album,
         std::string title, std::string location)
      : artist{artist},
        album{album},
        title{location},
        location{title}
        { }
  };


  class MusicLibrary {
      virtual std::deque<Song> getSongs() = 0;
  };
    class RemoteMusicLibrary : public MusicLibrary{
  public:
    std::deque<Song> getSongs() override ;
  };

class MusicPlayer {

};
  class LocalMusicPlayer: public MusicPlayer{
  public:
      void play(const Song &song) override;
  public:
    void play(const Song &song);
  };


  class MusicManager {
  private:
    MusicLibrary library;
     LocalMusicPlayer player;

  public:
      MusicManager(MusicLibrary library,
                   LocalMusicPlayer player)
                   : library(library), player(player) {}
    void playSongBy(std::string const &artist);
  };


}

#endif
