#pragma once
#include <bits/stdc++.h>
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "InitSDL.h"
#include "getmousepos.h"
#include "InitArrow.h"
#include "ProcessArrow.h"
#include "InitArrowPOs.h"

void RenderArrow()
{
    GetMousePos();

    //team 1
    for (int i = 0; i < Arrow[1].size(); ++i)
    if (Arrow[1][i].x != -1)
    {
        if (!Pause) ProcessArrow(1,i);

        if (Arrow[1][i].x == -1) continue;

        if (Arrow[1][i].type == 1)
        {
            gArrow.render( ArrowPos[ArrowLeft].x , ArrowPos[ArrowLeft].y, ArrowPos[ArrowLeft].w, ArrowPos[ArrowLeft].h , Arrow[1][i].x - 6 * r_x , Arrow[1][i].y, Arrow[1][i].w, Arrow[1][i].h );
        } else
        if (Arrow[1][i].type == 2)
        {
            gGoldArrow.render( GoldArrowPos[GoldArrowLeft].x , GoldArrowPos[GoldArrowLeft].y, GoldArrowPos[GoldArrowLeft].w, GoldArrowPos[GoldArrowLeft].h , Arrow[1][i].x - 6 * r_x , Arrow[1][i].y, Arrow[1][i].w, Arrow[1][i].h );
        }
    }

    //team 2
    for (int i = 0; i < Arrow[2].size(); ++i)
    if (Arrow[2][i].x != -1)
    {
        if (!Pause) ProcessArrow(2,i);

        if (Arrow[2][i].x == -1) continue;

        if (Arrow[2][i].type == 1)
        {
            gArrow.render( ArrowPos[ArrowRight].x , ArrowPos[ArrowRight].y, ArrowPos[ArrowRight].w, ArrowPos[ArrowRight].h , Arrow[2][i].x - 6 * r_x , Arrow[2][i].y, Arrow[2][i].w, Arrow[2][i].h );
        } else
        //Gold Arrow
        if (Arrow[2][i].type == 2)
        {
            gGoldArrow.render( GoldArrowPos[GoldArrowRight].x , GoldArrowPos[GoldArrowRight].y, GoldArrowPos[GoldArrowRight].w, GoldArrowPos[GoldArrowRight].h , Arrow[2][i].x - 6 * r_x , Arrow[2][i].y, Arrow[2][i].w, Arrow[2][i].h );
        }
    }

    return;
}


