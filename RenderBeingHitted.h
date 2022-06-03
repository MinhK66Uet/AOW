#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "InitSDL.h"

struct Hitted
{
    int x, y, w, h, direct, time;
};

vector < Hitted > SaveHitted;

void renderBeingHitted()
{
    for (int i = 0; i < SaveHitted.size(); ++ i )
    if ( SaveHitted[ i ].time != -1)
    {
        SaveHitted[ i ].time -- ;

        if ( SaveHitted[ i ].direct == 1 )
         gHitted.render( 40, 0, 39, 42, SaveHitted[ i ].x, SaveHitted[ i ].y, SaveHitted[ i ].w, SaveHitted[ i ].h );
        else
         gHitted.render( 0, 0, 39, 42, SaveHitted[ i ].x, SaveHitted[ i ].y, SaveHitted[ i ].w, SaveHitted[ i ].h );
    }
}
