#pragma once
#include <bits/stdc++.h>
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "InitSDL.h"
#include "renderbackground.h"
#include "initbasepos.h"
#include "renderbase.h"
#include "Initall.h"
#include "inittrooppos.h"
#include "rendertroop.h"
#include "inittroop.h"
#include "handleevent.h"
#include "SpawnTroop.h"
#include "Spawnarrow.h"
#include "RenderArrow.h"
#include "RenderEffect.h"
#include "SpawnEffect.h"
#include "RenderMenuBar.h"
#include "RenderHealthBar.h"
#include "renderResource.h"
#include <windows.h>

int PWin;

bool Playing()
{
    bool quit = false;

    while( !quit )
			  {
			     //Event
                 if (HandleEvent() == -1) {quit = true; break;}

                 if (Base[1].hp <= 0 || Base[2].hp <= 0)
                 {
                        if (Base[1].hp <= 0) PWin = 2; else PWin = 1;
                        break;
                 }

                 RenderBackground();
                 RenderBase();
                 RenderMenuBar();
                 RenderButton();
                 RenderHealthBar();
                 RenderResouce();
                 RenderTroop();
                 RenderArrow();
                 RenderEffect();

                 SDL_RenderPresent( gRenderer );
                 SDL_Delay(8 / GameSpeed);
			  }


    return quit;
}

bool ProcessStart()
{
    bool quit = false, start = false;
              SDL_Event e; int tt = 1;
bool clicked=0;
    while (!start)
              {
                 int x,y;
                 SDL_GetMouseState( &x, &y );

                 gStartMenu.render(code, code, code, code, code, code, code, code);

                 if (tt == 1)
                 {
                   if (x >= 300 + 40 && x <= 300 + 240 - 50 && y >= 200 + 12 && y <= 200 + 120 - 20)
                   gPlay2.render(code, code, code, code, 300, 200, 240, 120); else
                   gPlay.render(code, code, code, code, 300, 200, 240, 120);

                   if (x >= 300 + 40 && x <= 300 + 240 - 50 && y >= 350 + 12 && y <= 350 + 120 - 20)
                   gExit2.render(code, code, code, code, 300, 350, 240, 120); else
                   gExit.render(code, code, code, code, 300, 350, 240, 120);
                 } else
                 if (tt == 2)
                 {
                    if (x >= 350 + 3 && x <= 350 + 160 - 3 && y >= 200 + 2 && y <= 200 + 70 - 2)
                    gEasy2.render(code, code, code, code, 350, 200, 160, 70); else
                    gEasy.render(code, code, code, code, 350, 200, 160, 70);

                    if (x >= 350 + 3 && x <= 350 + 160 - 3 && y >= 300 + 2 && y <= 300 + 70 - 2)
                    gMedium2.render(code, code, code, code, 350, 300, 160, 70); else
                    gMedium.render(code, code, code, code, 350, 300, 160, 70);

                    if (x >= 350 + 3 && x <= 350 + 160 - 3 && y >= 400 + 2 && y <= 400 + 70 - 2)
                    gHard2.render(code, code, code, code, 350, 400, 160, 70); else
                    gHard.render(code, code, code, code, 350, 400, 160, 70);
                 }

                 SDL_PollEvent(&e);
                 {

                     if ( e.type == SDL_QUIT ) {quit = true; start = true; break;}

                     if ( e.type == SDL_MOUSEBUTTONDOWN && clicked == 0)
                     {
                         clicked=1;
                            SDL_GetMouseState( &x, &y );
                         if (tt == 1)
                         {
                           if (x >= 300 + 40 && x <= 300 + 240 - 50 && y >= 200 + 12 && y <= 200 + 120 - 20)
                           {
                              tt = 2;
                              //break;
                              continue;
                           }

                           if (x >= 300 + 40 && x <= 300 + 240 - 50 && y >= 350 + 12 && y <= 350 + 120 - 20)
                           {
                              quit = true;
                              start = true;
                              //break;
                              continue;
                           }
                         } else
                         if (tt == 2)
                         {
                           if (x >= 350 + 3 && x <= 350 + 160 - 3 && y >= 200 + 2 && y <= 200 + 70 - 2)
                           {
                               start = true;
                               Difficult = 1;
                              //break;
                              continue;
                           } else
                           if (x >= 350 + 3 && x <= 350 + 160 - 3 && y >= 300 + 2 && y <= 300 + 70 - 2)
                           {
                               start = true;
                               Difficult = 2;
                              //break;
                              continue;
                           } else
                           if (x >= 350 + 3 && x <= 350 + 160 - 3 && y >= 400 + 2 && y <= 400 + 70 - 2)
                           {
                               start = true;
                               Difficult = 3;
                              //break;
                              continue;
                           }
                         }
                     }

                     if ( e.type == SDL_MOUSEBUTTONUP) clicked=0;

                 }

                 SDL_RenderPresent( gRenderer );
              }

              return quit;
}

void RenderEndGame()
{
    if (PWin == 1)
    {
       gVictory.render(code, code, code, code, 300, 200 , 300, 100);
    } else
    {
       gDefeat.render(code, code, code, code, 300, 200 , 300, 100);
    }

    SDL_RenderPresent( gRenderer );
    SDL_Event e;

    SDL_Delay(1000);

    bool quit = false;
    while (!quit)
    {
         SDL_PollEvent( &e );

         if ( e.type == SDL_MOUSEBUTTONDOWN ) quit = true;
    }
}


int main( int argc, char* args[] )
{
    FreeConsole();

    InitAll();

	if( !init() )
	{
		printf( "Failed to initialize!\n" );
	}
	else
	{
		if( !loadMedia() )
		{
			printf( "Failed to load media!\n" );
		}
		else
		{
            while (1)
            {
              SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );
              SDL_RenderClear( gRenderer );

              bool quit = false;

              quit = ProcessStart();

              if (quit == true) break;

              InitAll();
              quit = Playing();
              RenderEndGame();

              if (quit == true) break;
            }
		}
	}

	//Free resources and close SDL
	close();

	return 0;
}
