#pragma once
#include <bits/stdc++.h>
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "InitSDL.h"
#include "SpawnTroop.h"
#include "random.h"
#include "SpawnEffect.h"
#include "getmousepos.h"
#include "RenderButton.h"
#include "InitUpdate.h"
#include "ProcessUpdate.h"

int tmp = 0 , TimeSpawn , TimeUpdate, MaxTimeSpawn = 413;

int HandleEvent()
{
     SDL_Event e;
     while ( SDL_PollEvent( &e ) != 0 )
     {
            if ( e.type == SDL_QUIT ) return -1;

            if ( e.type == SDL_MOUSEBUTTONDOWN)
            {
                //Get Mouse pos
                int x,y;
                SDL_GetMouseState( &x, &y );

                //pause game

                if ( x >= 790 && x <= 790 + 53 && y >= 33 && y <= 33 + 53)
                {
                    Pause = !Pause;
                }

                //game speed
                if (x >= 0 && x <= 37 && y >= SCREEN_HEIGHT - 37 && y <= SCREEN_HEIGHT)
                {
                    if (GameSpeed == 1) GameSpeed = 2; else
                    if (GameSpeed == 2) GameSpeed = 4; else
                    GameSpeed = 1;
                }

                cout << x <<" "<<y<<'\n';

                if (Pause == true) {} else
                if (x >= 81 + 90 * 0 && x <= 81 + 90 * 0 + 54 && y >= 44 && y <= 44 + 24 ) SpawnTroop(1, -1, -1, TroopBlock[1][1], -1); else
                if (x >= 171 && x <= 171 + 54 && y >= 44 && y <= 44 + 24 ) SpawnTroop(1, -1, -1, TroopBlock[1][2], -1); else
                if (x >= 261 && x <= 261 + 54 && y >= 44 && y <= 44 + 24 ) SpawnTroop(1, -1, -1, TroopBlock[1][3], -1); else
                if (x >= 81 + 90 * 3 && x <= 81 + 90 * 3 + 54 && y >= 44 && y <= 44 + 24 ) SpawnTroop(1, -1, -1, TroopBlock[1][4], -1); else
                if (x >= 81 + 90 * 4 && x <= 81 + 90 * 4 + 54 && y >= 44 && y <= 44 + 24 ) SpawnTroop(1, -1, -1, TroopBlock[1][5], -1);

                //Update
                if (x >= 576 && x <= 576 + 36 && y >= 28 && y <= 28 + 16) ProcessUpdate(1, 1);

                if (x >= 639 && x <= 639 + 36 && y >= 28 && y <= 28 + 16) ProcessUpdate(1, 2);

                if (x >= 639 + 63 && x <= 639 + 36 + 63 && y >= 28 && y <= 28 + 16) ProcessUpdate(1, 3);

                if (x >= 576 && x <= 576 + 36 && y >= 64 && y <= 64 + 16) ProcessUpdate(1, 4);

                if (x >= 639 && x <= 639 + 36 && y >= 64 && y <= 64 + 16) ProcessUpdate(1, 5);

                if (x >= 639 + 63 && x <= 639 + 36 + 63 && y >= 64 && y <= 64 + 16) ProcessUpdate(1, 6);
            }

            //Key pressed
            if ( e.type == SDL_KEYDOWN)
            {

                if( e.key.keysym.sym == SDLK_LEFT )
                {
                        if ( r_x > 2 ) r_x -= 2;
                }

                if( e.key.keysym.sym == SDLK_RIGHT )
                {
                        if ( r_x < SCREEN_WIDTH - RENDER_WIDTH - 389 - 2) r_x += 2;
                }

            }
     }

     if (!Pause)
     {TimeSpawn --; TimeUpdate --;}

     if (TimeSpawn <= 0)
     {
         TimeSpawn = MaxTimeSpawn;

         int a = random(1,5);
         if (a == 5) SpawnTroop(2, -1, -1, 6, -1); else

         SpawnTroop(2, -1, -1, a % 4 + 1, -1);
     }

     if (TimeUpdate <= 0)
     {
         TimeUpdate = 213;
         int a = random(1, 1200);
         ProcessUpdate(2, a % 6 + 1);
     }

     return 0;
}
