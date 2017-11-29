#!/usr/bin/env bash

g++ -I/usr/include/SDL2 \
  main.cpp startup.cpp \
  -lSDL2 -lSDL2_ttf -lSDL2_image