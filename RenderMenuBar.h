#pragma once
#include <bits/stdc++.h>
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "InitSDL.h"
#include "getmousepos.h"

void RenderMenuBar()
{
      GetMousePos();
      //render menubar
      gMenuBar.render(code,code,code,code, 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT * 1 / 5 );
}

