#include <iostream>
#include "SDL.h"
#include "SDL_ttf.h"
#include "startup.h"

StartupScreen::StartupScreen() {
  nStatusCode = SDL_Init(SDL_INIT_VIDEO);
  if (nStatusCode != 0) {
    std::cout << "SDL_Init failed: " << SDL_GetError() << std::endl;
    SDL_Quit();
    return;
  }

  nStatusCode = SDL_CreateWindowAndRenderer(500, 375,
    SDL_WINDOW_OPENGL //| SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI
    , &this->window, &this->renderer
  );
  if (nStatusCode != 0) {
    std::cout << "SDL_CreateWindowAndRenderer failed: " << SDL_GetError() << std::endl;
    SDL_Quit();
    return;
  }
}

int StartupScreen::status() {
  return nStatusCode;
}