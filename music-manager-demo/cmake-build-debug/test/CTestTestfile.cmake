# CMake generated Testfile for 
# Source directory: C:/LOCATION/CMPT 473/lec/music-manager/music-manager-demo/test
# Build directory: C:/LOCATION/CMPT 473/lec/music-manager/music-manager-demo/cmake-build-debug/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(AllTests "C:/LOCATION/CMPT 473/lec/music-manager/music-manager-demo/cmake-build-debug/test/runAllTests.exe")
set_tests_properties(AllTests PROPERTIES  _BACKTRACE_TRIPLES "C:/LOCATION/CMPT 473/lec/music-manager/music-manager-demo/test/CMakeLists.txt;13;add_test;C:/LOCATION/CMPT 473/lec/music-manager/music-manager-demo/test/CMakeLists.txt;0;")
subdirs("gtest")
