#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "InitSDL.h"

void RenderDeadth()
{
    for ( int i = 0; i < SaveDeadth.size(); ++ i)
    if ( SaveDeadth[i].time != -1 )
    {
        gDeadth.render( -1, -1, -1, -1, SaveDeadth[i].x, SaveDeadth[i].y, SaveDeadth[i].w, SaveDeadth[i].h );
        SaveDeadth[i].time --;
    }
}
