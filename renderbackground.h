#pragma once
#include <bits/stdc++.h>
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "InitSDL.h"
#include "getmousepos.h"

void RenderBackground()
{
      GetMousePos();
      //renderbackground
      Background.render(r_x, 350, RENDER_WIDTH, RENDER_HEIGHT, code, code, code, code );
}
