cmake_minimum_required(VERSION 3.19)
project(C++PrimerPlus)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}-g")
set(CMAKE_BUILD_TYPE debug)
add_executable(untitled src/chapter14/chapter14.cpp src/chapter14/Wine.cpp src/chapter14/Wine.h src/chapter14/Person.cpp src/chapter14/Person.h src/chapter14/Gunslinger.cpp src/chapter14/Gunslinger.h src/chapter14/PokerPlayer.cpp src/chapter14/PokerPlayer.h src/chapter14/BadDude.cpp src/chapter14/BadDude.h src/chapter15/chapter15.cpp)
