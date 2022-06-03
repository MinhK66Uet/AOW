#pragma once
#include <bits/stdc++.h>
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "InitSDL.h"
#include "getmousepos.h"
#include "InitEffectPos.h"
#include "InitEffect.h"
#include "ProcessEffect.h"

void RenderEffect()
{
     GetMousePos();

     for (int i = 0; i < Effect.size(); ++ i )
     if ( Effect[i].x != -1)
     {
         if (!Pause) ProcessEffect(i);

         if (Effect[i].x < 0) continue;

         //being hitted
         if (Effect[i].type == 1)
         {
             if (Effect[i].team == 1) gHitted.render(HittedPos[HittedLeft].x, HittedPos[HittedLeft].y, HittedPos[HittedLeft].w, HittedPos[HittedLeft].h, Effect[i].x - 6 * r_x, Effect[i].y, Effect[i].w, Effect[i].h );
             if (Effect[i].team == 2) gHitted.render(HittedPos[HittedRight].x, HittedPos[HittedRight].y, HittedPos[HittedRight].w, HittedPos[HittedRight].h, Effect[i].x - 6 * r_x, Effect[i].y, Effect[i].w, Effect[i].h );
         } else
         //deadth
         if (Effect[i].type == 2)
         {
             gDeadth.render(code, code, code, code, Effect[i].x - 6 * r_x, Effect[i].y, Effect[i].w, Effect[i].h );
         } else
         //healing
         if (Effect[i].type == 3)
         {
             int tmp = (50 - Effect[i].time) / 5 + 1;
             gHeal.render(HealPos[tmp].x, HealPos[tmp].y, HealPos[tmp].w, HealPos[tmp].h, Effect[i].x - 6 * r_x, Effect[i].y, Effect[i].w, Effect[i].h );
         } else
         //rooted
         if (Effect[i].type == 4)
         {
            int tmp = (Effect[i].maxtime - Effect[i].time) / 10 + 1;
            tmp = min(tmp,5);
            gRooted.render(RootedPos[tmp].x, RootedPos[tmp].y, RootedPos[tmp].w, RootedPos[tmp].h, Effect[i].x - 6 * r_x, Effect[i].y, Effect[i].w, Effect[i].h );
         }

     }

     return;
}
