cmake_minimum_required(VERSION 3.27)
project(Repository_Pattern)

set(CMAKE_CXX_STANDARD 17)

add_executable(Repository_Pattern main.cpp
        Bot.cpp
        Bot.h
        Terminator.cpp
        Terminator.h
        ProtocolDroid.cpp
        ProtocolDroid.h
        BotFactory.cpp
        BotFactory.h)
