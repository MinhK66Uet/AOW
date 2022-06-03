#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "InitSDL.h"

void RenderHealing()
{
    for ( int i = 0; i < SaveHealing.size(); ++ i)
    if ( SaveHealing[i].time != -1 )
    {
        gHealing.render( -1, -1, -1, -1, SaveHealing[i].x, SaveHealing[i].y, SaveHealing[i].w, SaveHealing[i].h );
        SaveHealing[i].time --;
    }
}

