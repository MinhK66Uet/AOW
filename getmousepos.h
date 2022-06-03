#pragma once
#include <bits/stdc++.h>
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "InitSDL.h"

int r_x, r_y;

void GetMousePos()
{
    //Mouse postion
      int x,y;
      SDL_GetMouseState( &x, &y );

      //std::cout << x <<" "<<y<<" | " << r_x <<" "<<r_y<<'\n';

      if ( y < SCREEN_HEIGHT * 1 / 5) return;
      if (x <= 10 && r_x > 0) r_x --;
      if (x >= SCREEN_WIDTH - 9 && r_x < SCREEN_WIDTH - RENDER_WIDTH - 389) r_x ++;
}
