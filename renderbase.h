#pragma once
#include <bits/stdc++.h>
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "InitSDL.h"
#include "getmousepos.h"
#include "ProcessBase.h"
#include "RenderButton.h"

void RenderBase()
{
      GetMousePos();

      if (!Pause) ProcessBase();

      //renderbackground
      gElfBase.render(ElfBasePos[ElfBase1Left].x, ElfBasePos[ElfBase1Left].y, ElfBasePos[ElfBase1Left].w, ElfBasePos[ElfBase1Left].h, 0 - r_x * 6, 100, 400, 500 );

      gElfBase.render(ElfBasePos[ElfBase1Right].x, ElfBasePos[ElfBase1Right].y, ElfBasePos[ElfBase1Right].w, ElfBasePos[ElfBase1Right].h, 2665 - r_x * 6, 100, 400, 500 );
}

