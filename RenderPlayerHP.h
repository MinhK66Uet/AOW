#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "InitSDL.h"
#include "ProcessPlayer.h"

void RenderPlayerHP()
{
    int x = 3, y = 0 , w = 26, h = 32;
    for ( int i = 1; i <= HP; ++i )
     gHeart.render( -1, -1, -1, -1, x + (i - 1) * w, y, w, h );
}
