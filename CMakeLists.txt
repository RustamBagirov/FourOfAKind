cmake_minimum_required(VERSION 3.17)
project(FourOfAKind)

set(CMAKE_CXX_STANDARD 20)

add_executable(FourOfAKind main.cpp Card.h Game.h Deck.h Player.h Hand.h Card.cpp Game.cpp)