add_subdirectory(gtest)
enable_testing()

add_executable(runAllTests
  MusicManagerTests.cpp
)

target_link_libraries(runAllTests
  gmock gtest gtest_main
  music-manager
)

add_test(NAME AllTests COMMAND runAllTests)

