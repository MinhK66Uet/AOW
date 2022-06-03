#pragma once
#include <bits/stdc++.h>
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "InitSDL.h"
#include "getmousepos.h"

void RenderHealthBar()
{
     gHealthBar.render(code, code, code, code, 0, 95 + 18, 254, 12);

     for (int i = 1; i <= Base[1].hp / 4; ++i)
     {
         gHealth.render(code, code, code, code, 2 + i, 95 + 20, 1, 8);
     }

     gHealthBar.render(code, code, code, code, SCREEN_WIDTH - 254 - 1, 95 + 18, 254, 12);

     for (int i = 1; i <= Base[2].hp / 4; ++i)
     {
         gHealth.render(code, code, code, code, SCREEN_WIDTH - 254 - 1 + 2 + i, 95 + 20, 1, 8);
     }
}
