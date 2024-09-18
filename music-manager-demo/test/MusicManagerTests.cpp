#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "MusicManager.h"

using namespace music;
using namespace testing;

TEST(songtests, songConstructor){
    std::string artist = "St Vincent";
    Song song{"St Vincent", "qqqqq","wwww","rrr"};
    EXPECT_EQ(artist, song.artist);

}



TEST(musicmanagertests, playsongbytest){

    MusicPlayer player;
    MusicLibrary library;
    MusicManager manager(library,player);

    std::string artist = "prince";
    manager.playSongBy(artist);

    ASSERT_TRUE(player.wasPlayed)
}