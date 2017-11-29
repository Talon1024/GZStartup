#ifndef STARTUP_H
#define STARTUP_H

#include "SDL.h"

class StartupScreen {
  protected:
    SDL_Renderer* renderer;
    SDL_Window* window;
    int nStatusCode;
  public:
    static const int nTopFontSize = 16;
    static const int nConFontSize = 12;
    StartupScreen();
    int status();
};

#endif