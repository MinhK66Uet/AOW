#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "ResetEnemy.h"
#include "InitSDL.h"

void RenderEnemy()
{
    for (int i = 0; i < ECap; ++i )
    if ( enemy[i].x != -1)
    {
         //printf( "%i %i %i %i %i\n", i , enemy[i].x , enemy[i].y , enemy[i].w, enemy[i].h );

         //Sword
         if ( EType[ i ] == 1 )
         {
           //Render Enemy Indle
           if ( EIndle[i] > 0)
           {
              if ( EDirect[i] == 1)
              {
                  if ( EIndle[i] <= 51) gEnemy.render( EnemyPos[ EIndleTallRight ].x, EnemyPos[ EIndleTallRight ].y, EnemyPos[ EIndleTallRight ].w, EnemyPos[ EIndleTallRight ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
                  else gEnemy.render( EnemyPos[ EIndleShortRight ].x, EnemyPos[ EIndleShortRight ].y, EnemyPos[ EIndleShortRight ].w, EnemyPos[ EIndleShortRight ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
              } else
              {
                  if ( EIndle[i] <= 51) gEnemy.render( EnemyPos[ EIndleTallLeft ].x, EnemyPos[ EIndleTallLeft ].y, EnemyPos[ EIndleTallLeft ].w, EnemyPos[ EIndleTallLeft ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
                  else gEnemy.render( EnemyPos[ EIndleShortLeft ].x, EnemyPos[ EIndleShortLeft ].y, EnemyPos[ EIndleShortLeft ].w, EnemyPos[ EIndleShortLeft ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
              }
           }


           //Render Enemy Attack
           if ( EAttack[i] > 0 )
           {
               EAttack[i] -- ;
               //Right
               if (EDirect[i] == 1)
               {
                  if ( EAttack[i] >= 40 ) gEnemy.render( EnemyPos[ EPrepareAttackRight ].x, EnemyPos[ EPrepareAttackRight ].y, EnemyPos[ EPrepareAttackRight ].w, EnemyPos[ EPrepareAttackRight ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
                  else gEnemy.render( EnemyPos[ EAttackRight ].x, EnemyPos[ EAttackRight ].y, EnemyPos[ EAttackRight ].w, EnemyPos[ EAttackRight ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
               } else
               //Left
               {
                  if ( EAttack[i] >= 40 ) gEnemy.render( EnemyPos[ EPrepareAttackLeft ].x, EnemyPos[ EPrepareAttackLeft ].y, EnemyPos[ EPrepareAttackLeft ].w, EnemyPos[ EPrepareAttackLeft ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
                  else gEnemy.render( EnemyPos[ EAttackLeft ].x, EnemyPos[ EAttackLeft ].y, EnemyPos[ EAttackLeft ].w, EnemyPos[ EAttackLeft ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
               }

           }

           //Enemy Move
           if ( EMove[i] > 0 )
           {
               EMove[i] --;

               //Right
               if ( EDirect[i] == 1)
               {
                  if ( EMove[i] >= 40 ) gEnemy.render( EnemyPos[ EWalkRight1 ].x, EnemyPos[ EWalkRight1 ].y, EnemyPos[ EWalkRight1 ].w, EnemyPos[ EWalkRight1 ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
                  else gEnemy.render( EnemyPos[ EWalkRight2 ].x, EnemyPos[ EWalkRight2 ].y, EnemyPos[ EWalkRight2 ].w, EnemyPos[ EWalkRight2 ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
               } else
               //Left
               {
                  if ( EMove[i] >= 40 ) gEnemy.render( EnemyPos[ EWalkLeft1 ].x, EnemyPos[ EWalkLeft1 ].y, EnemyPos[ EWalkLeft1 ].w, EnemyPos[ EWalkLeft1 ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
                  else gEnemy.render( EnemyPos[ EWalkLeft2 ].x, EnemyPos[ EWalkLeft2 ].y, EnemyPos[ EWalkLeft2 ].w, EnemyPos[ EWalkLeft2 ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
               }
           }
         } else
         //Archer
         if ( EType[i] == 2 )
         {
            //Render Enemy Indle
            if ( EIndle[i] > 0)
            {
              if ( EDirect[i] == 1)
              {
                  if ( EIndle[i] <= 51) gArcher.render( ArcherPos[ AIndleTallRight ].x, ArcherPos[ AIndleTallRight ].y, ArcherPos[ AIndleTallRight ].w, ArcherPos[ AIndleTallRight ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
                  else gArcher.render( ArcherPos[ AIndleShortRight ].x, ArcherPos[ AIndleShortRight ].y, ArcherPos[ AIndleShortRight ].w, ArcherPos[ AIndleShortRight ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
              } else
              {
                  if ( EIndle[i] <= 51) gArcher.render( ArcherPos[ AIndleTallLeft ].x, ArcherPos[ AIndleTallLeft ].y, ArcherPos[ AIndleTallLeft ].w, ArcherPos[ AIndleTallLeft ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
                  else gArcher.render( ArcherPos[ AIndleShortLeft ].x, ArcherPos[ AIndleShortLeft ].y, ArcherPos[ AIndleShortLeft ].w, ArcherPos[ AIndleShortLeft ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
              }
           }

           //Render Enemy Attack
           if ( EAttack[i] > 0 )
           {
               EAttack[i] -- ;
               //Right
               if (EDirect[i] == 1)
               {
                  if ( EAttack[i] >= 60 ) gArcher.render( ArcherPos[ APrepareAttackRight ].x, ArcherPos[ APrepareAttackRight ].y, ArcherPos[ APrepareAttackRight ].w, ArcherPos[ APrepareAttackRight ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
                  else gArcher.render( ArcherPos[ AAttackRight ].x, ArcherPos[ AAttackRight ].y, ArcherPos[ AAttackRight ].w, ArcherPos[ AAttackRight ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
               } else
               //Left
               {
                  if ( EAttack[i] >= 60 ) gArcher.render( ArcherPos[ APrepareAttackLeft ].x, ArcherPos[ APrepareAttackLeft ].y, ArcherPos[ APrepareAttackLeft ].w, ArcherPos[ APrepareAttackLeft ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
                  else gArcher.render( ArcherPos[ AAttackLeft ].x, ArcherPos[ AAttackLeft ].y, ArcherPos[ AAttackLeft ].w, ArcherPos[ AAttackLeft ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
               }

           }

           //Enemy Move
           if ( EMove[i] > 0 )
           {
               EMove[i] --;

               //Right
               if ( EDirect[i] == 1)
               {
                  if ( EMove[i] >= 40 ) gArcher.render( ArcherPos[ AWalkRight1 ].x, ArcherPos[ AWalkRight1 ].y, ArcherPos[ AWalkRight1 ].w, ArcherPos[ AWalkRight1 ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
                  else gArcher.render( ArcherPos[ AWalkRight2 ].x, ArcherPos[ AWalkRight2 ].y, ArcherPos[ AWalkRight2 ].w, ArcherPos[ AWalkRight2 ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
               } else
               //Left
               {
                  if ( EMove[i] >= 40 ) gArcher.render( ArcherPos[ AWalkLeft1 ].x, ArcherPos[ AWalkLeft1 ].y, ArcherPos[ AWalkLeft1 ].w, ArcherPos[ AWalkLeft1 ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
                  else gArcher.render( ArcherPos[ AWalkLeft2 ].x, ArcherPos[ AWalkLeft2 ].y, ArcherPos[ AWalkLeft2 ].w, ArcherPos[ AWalkLeft2 ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
               }
           }


         } else
         // SpearMan
         if ( EType[i] == 3 )
         {
            //Render Enemy Indle
            if ( EIndle[i] > 0)
            {
              if ( EDirect[i] == 1)
              {
                  if ( EIndle[i] <= 51) gSpear.render( SpearPos[ SPIndleTallRight ].x, SpearPos[ SPIndleTallRight ].y, SpearPos[ SPIndleTallRight ].w, SpearPos[ SPIndleTallRight ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
                  else gSpear.render( SpearPos[ SPIndleShortRight ].x, SpearPos[ SPIndleShortRight ].y, SpearPos[ SPIndleShortRight ].w, SpearPos[ SPIndleShortRight ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
              } else
              {
                  if ( EIndle[i] <= 51) gSpear.render( SpearPos[ SPIndleTallLeft ].x, SpearPos[ SPIndleTallLeft ].y, SpearPos[ SPIndleTallLeft ].w, SpearPos[ SPIndleTallLeft ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
                  else gSpear.render( SpearPos[ SPIndleShortLeft ].x, SpearPos[ SPIndleShortLeft ].y, SpearPos[ SPIndleShortLeft ].w, SpearPos[ SPIndleShortLeft ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
              }
           }

           //Render Enemy Attack
           if ( EAttack[i] > 0 )
           {
               EAttack[i] -- ;
               //Right
               if (EDirect[i] == 1)
               {
                  if ( EAttack[i] >= 40 ) gSpear.render( SpearPos[ SPPrepareAttackRight ].x, SpearPos[ SPPrepareAttackRight ].y, SpearPos[ SPPrepareAttackRight ].w, SpearPos[ SPPrepareAttackRight ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
                  else gSpear.render( SpearPos[ SPAttackRight ].x, SpearPos[ SPAttackRight ].y, SpearPos[ SPAttackRight ].w, SpearPos[ SPAttackRight ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
               } else
               //Left
               {
                  if ( EAttack[i] >= 40 ) gSpear.render( SpearPos[ SPPrepareAttackLeft ].x, SpearPos[ SPPrepareAttackLeft ].y, SpearPos[ SPPrepareAttackLeft ].w, SpearPos[ SPPrepareAttackLeft ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
                  else gSpear.render( SpearPos[ SPAttackLeft ].x, SpearPos[ SPAttackLeft ].y, SpearPos[ SPAttackLeft ].w, SpearPos[ SPAttackLeft ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
               }

           }

           //Enemy Move
           if ( EMove[i] > 0 )
           {
               EMove[i] --;

               //Right
               if ( EDirect[i] == 1)
               {
                  if ( EMove[i] >= 40 ) gSpear.render( SpearPos[ SPWalkRight1 ].x, SpearPos[ SPWalkRight1 ].y, SpearPos[ SPWalkRight1 ].w, SpearPos[ SPWalkRight1 ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
                  else gSpear.render( SpearPos[ SPWalkRight2 ].x, SpearPos[ SPWalkRight2 ].y, SpearPos[ SPWalkRight2 ].w, SpearPos[ SPWalkRight2 ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
               } else
               //Left
               {
                 if ( EMove[i] >= 40 ) gSpear.render( SpearPos[ SPWalkLeft1 ].x, SpearPos[ SPWalkLeft1 ].y, SpearPos[ SPWalkLeft1 ].w, SpearPos[ SPWalkLeft1 ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
                 else gSpear.render( SpearPos[ SPWalkLeft2 ].x, SpearPos[ SPWalkLeft2 ].y, SpearPos[ SPWalkLeft2 ].w, SpearPos[ SPWalkLeft2 ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
               }
           }

           //Render Enemy Defend
           if ( EDefend[i] > 0)
           {
              EDefend[i] --;
              if ( EDirect[i] == 1)
              {
                  gSpear.render( SpearPos[ SPDefendRight ].x, SpearPos[ SPDefendRight ].y, SpearPos[ SPDefendRight ].w, SpearPos[ SPDefendRight ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
              } else
              {
                  gSpear.render( SpearPos[ SPDefendLeft ].x, SpearPos[ SPDefendLeft ].y, SpearPos[ SPDefendLeft ].w, SpearPos[ SPDefendLeft ].h, enemy[i].x, enemy[i].y, enemy[i].w, enemy[i].h );
              }
           }

         } else
         //SharpShooter
         if ( EType[i] == 4 )
         {
            //Render Enemy Indle
            if ( EIndle[i] > 0)
            {
              if ( EDirect[i] == 1)
              {
                  if ( EIndle[i] <= 51) gSharpShooter.render( SharpShooterPos[ SSIndleTallRight ].x, SharpShooterPos[ SSIndleTallRight ].y, SharpShooterPos[ SSIndleTallRight ].w, SharpShooterPos[ SSIndleTallRight ].h, enemy[i].x, enemy[i].y - 16 , enemy[i].w, enemy[i].h );
                  else gSharpShooter.render( SharpShooterPos[ SSIndleShortRight ].x, SharpShooterPos[ SSIndleShortRight ].y, SharpShooterPos[ SSIndleShortRight ].w, SharpShooterPos[ SSIndleShortRight ].h, enemy[i].x, enemy[i].y - 16, enemy[i].w, enemy[i].h );
              } else
              {
                  if ( EIndle[i] <= 51) gSharpShooter.render( SharpShooterPos[ SSIndleTallLeft ].x, SharpShooterPos[ SSIndleTallLeft ].y, SharpShooterPos[ SSIndleTallLeft ].w, SharpShooterPos[ SSIndleTallLeft ].h, enemy[i].x, enemy[i].y - 16 , enemy[i].w, enemy[i].h );
                  else gSharpShooter.render( SharpShooterPos[ SSIndleShortLeft ].x, SharpShooterPos[ SSIndleShortLeft ].y, SharpShooterPos[ SSIndleShortLeft ].w, SharpShooterPos[ SSIndleShortLeft ].h, enemy[i].x, enemy[i].y - 16, enemy[i].w, enemy[i].h );
              }
           }

           //Render Enemy Move
            if ( EMove[i] > 0)
            {
              EMove[i] -- ;
              if ( EDirect[i] == 1)
              {
                  if ( EMove[i] >= 40 ) gSharpShooter.render( SharpShooterPos[ SSWalkRight1 ].x, SharpShooterPos[ SSWalkRight1 ].y, SharpShooterPos[ SSWalkRight1 ].w, SharpShooterPos[ SSWalkRight1 ].h, enemy[i].x, enemy[i].y - 16 , enemy[i].w, enemy[i].h );
                  else gSharpShooter.render( SharpShooterPos[ SSWalkRight2 ].x, SharpShooterPos[ SSWalkRight2 ].y, SharpShooterPos[ SSWalkRight2 ].w, SharpShooterPos[ SSWalkRight2 ].h, enemy[i].x, enemy[i].y - 16, enemy[i].w, enemy[i].h );
              } else
              {
                  if ( EMove[i] >= 40 ) gSharpShooter.render( SharpShooterPos[ SSWalkLeft1 ].x, SharpShooterPos[ SSWalkLeft1 ].y, SharpShooterPos[ SSWalkLeft1 ].w, SharpShooterPos[ SSWalkLeft1 ].h, enemy[i].x, enemy[i].y - 16 , enemy[i].w, enemy[i].h );
                  else gSharpShooter.render( SharpShooterPos[ SSWalkLeft2 ].x, SharpShooterPos[ SSWalkLeft2 ].y, SharpShooterPos[ SSWalkLeft2 ].w, SharpShooterPos[ SSWalkLeft2 ].h, enemy[i].x, enemy[i].y - 16, enemy[i].w, enemy[i].h );
              }
           }

            //Render Enemy Attack
            if ( EAttack[i] > 0)
            {
              EAttack[i] -- ;
              if ( EDirect[i] == 1)
              {
                  if ( EAttack[i] >= 37 ) gSharpShooter.render( SharpShooterPos[ SSPrepareAttackRight ].x, SharpShooterPos[ SSPrepareAttackRight ].y, SharpShooterPos[ SSPrepareAttackRight ].w, SharpShooterPos[ SSPrepareAttackRight ].h, enemy[i].x, enemy[i].y - 16 , enemy[i].w, enemy[i].h );
                  else gSharpShooter.render( SharpShooterPos[ SSAttackRight ].x, SharpShooterPos[ SSAttackRight ].y, SharpShooterPos[ SSAttackRight ].w, SharpShooterPos[ SSAttackRight ].h, enemy[i].x, enemy[i].y - 16, enemy[i].w, enemy[i].h );
              } else
              {
                  if ( EAttack[i] >= 37 ) gSharpShooter.render( SharpShooterPos[ SSPrepareAttackLeft ].x, SharpShooterPos[ SSPrepareAttackLeft ].y, SharpShooterPos[ SSPrepareAttackLeft ].w, SharpShooterPos[ SSPrepareAttackLeft ].h, enemy[i].x, enemy[i].y - 16 , enemy[i].w, enemy[i].h );
                  else gSharpShooter.render( SharpShooterPos[ SSAttackLeft ].x, SharpShooterPos[ SSAttackLeft ].y, SharpShooterPos[ SSAttackLeft ].w, SharpShooterPos[ SSAttackLeft ].h, enemy[i].x, enemy[i].y - 16, enemy[i].w, enemy[i].h );
              }
           }


         } else
         //ElfSwordMan
         if ( EType[i] == 5 )
         {
            //Render Enemy Indle
            if ( EIndle[i] > 0)
            {
              if ( EDirect[i] == 1)
              {
                  if ( EIndle[i] <= 51) gSwordElf.render( ElfSwordPos[ ESIndleTallRight ].x, ElfSwordPos[ ESIndleTallRight ].y, ElfSwordPos[ ESIndleTallRight ].w, ElfSwordPos[ ESIndleTallRight ].h, enemy[i].x, enemy[i].y - 16 , enemy[i].w, enemy[i].h );
                  else gSwordElf.render( ElfSwordPos[ ESIndleShortRight ].x, ElfSwordPos[ ESIndleShortRight ].y, ElfSwordPos[ ESIndleShortRight ].w, ElfSwordPos[ ESIndleShortRight ].h, enemy[i].x, enemy[i].y - 16 , enemy[i].w, enemy[i].h );
              } else
              {
                  if ( EIndle[i] <= 51) gSwordElf.render( ElfSwordPos[ ESIndleTallLeft ].x, ElfSwordPos[ ESIndleTallLeft ].y, ElfSwordPos[ ESIndleTallLeft ].w, ElfSwordPos[ ESIndleTallLeft ].h, enemy[i].x, enemy[i].y - 16 , enemy[i].w, enemy[i].h );
                  else gSwordElf.render( ElfSwordPos[ ESIndleShortLeft ].x, ElfSwordPos[ ESIndleShortLeft ].y, ElfSwordPos[ ESIndleShortLeft ].w, ElfSwordPos[ ESIndleShortLeft ].h, enemy[i].x, enemy[i].y - 16 , enemy[i].w, enemy[i].h );
              }
           }

           //Render Enemy Move
            if ( EMove[i] > 0)
            {
              EMove[i] -- ;
              if ( EDirect[i] == 1)
              {
                  if ( EMove[i] >= 53 ) gSwordElf.render( ElfSwordPos[ ESWalkRight1 ].x, ElfSwordPos[ ESWalkRight1 ].y, ElfSwordPos[ ESWalkRight1 ].w, ElfSwordPos[ ESWalkRight1 ].h, enemy[i].x, enemy[i].y - 16 , enemy[i].w, enemy[i].h );
                  else if ( EMove[i] >= 26) gSwordElf.render( ElfSwordPos[ ESWalkRight2 ].x, ElfSwordPos[ ESWalkRight2 ].y, ElfSwordPos[ ESWalkRight2 ].w, ElfSwordPos[ ESWalkRight2 ].h, enemy[i].x, enemy[i].y - 16 , enemy[i].w, enemy[i].h );
                  else gSwordElf.render( ElfSwordPos[ ESIndleTallRight ].x, ElfSwordPos[ ESIndleTallRight ].y, ElfSwordPos[ ESIndleTallRight ].w, ElfSwordPos[ ESIndleTallRight ].h, enemy[i].x, enemy[i].y - 16 , enemy[i].w, enemy[i].h );
              } else
              {
                  if ( EMove[i] >= 53 ) gSwordElf.render( ElfSwordPos[ ESWalkLeft1 ].x, ElfSwordPos[ ESWalkLeft1 ].y, ElfSwordPos[ ESWalkLeft1 ].w, ElfSwordPos[ ESWalkLeft1 ].h, enemy[i].x, enemy[i].y - 16 , enemy[i].w, enemy[i].h );
                  else if ( EMove[i] >= 26) gSwordElf.render( ElfSwordPos[ ESWalkLeft2 ].x, ElfSwordPos[ ESWalkLeft2 ].y, ElfSwordPos[ ESWalkLeft2 ].w, ElfSwordPos[ ESWalkLeft2 ].h, enemy[i].x, enemy[i].y - 16 , enemy[i].w, enemy[i].h );
                  else gSwordElf.render( ElfSwordPos[ ESIndleTallLeft ].x, ElfSwordPos[ ESIndleTallLeft ].y, ElfSwordPos[ ESIndleTallLeft ].w, ElfSwordPos[ ESIndleTallLeft ].h, enemy[i].x, enemy[i].y - 16 , enemy[i].w, enemy[i].h );
              }
           }

           //Render Enemy Attack 1
            if ( EAttack[i] > 0 && ETypeAttack[i] == 0 )
            {
              EAttack[i] -- ;
              if ( EDirect[i] == 1)
              {
                  if ( EAttack[i] >= 40 ) gSwordElf.render( ElfSwordPos[ ESPrepareAttackRight ].x, ElfSwordPos[ ESPrepareAttackRight ].y, ElfSwordPos[ ESPrepareAttackRight ].w, ElfSwordPos[ ESPrepareAttackRight ].h, enemy[i].x, enemy[i].y - 16 , enemy[i].w, enemy[i].h );
                  else gSwordElf.render( ElfSwordPos[ ESAttackRight ].x, ElfSwordPos[ ESAttackRight ].y, ElfSwordPos[ ESAttackRight ].w, ElfSwordPos[ ESAttackRight ].h, enemy[i].x, enemy[i].y - 16 , enemy[i].w, enemy[i].h );
              } else
              {
                  if ( EAttack[i] >= 40 ) gSwordElf.render( ElfSwordPos[ ESPrepareAttackLeft ].x, ElfSwordPos[ ESPrepareAttackLeft ].y, ElfSwordPos[ ESPrepareAttackLeft ].w, ElfSwordPos[ ESPrepareAttackLeft ].h, enemy[i].x, enemy[i].y - 16 , enemy[i].w, enemy[i].h );
                  else gSwordElf.render( ElfSwordPos[ ESAttackLeft ].x, ElfSwordPos[ ESAttackLeft ].y, ElfSwordPos[ ESAttackLeft ].w, ElfSwordPos[ ESAttackLeft ].h, enemy[i].x, enemy[i].y - 16 , enemy[i].w, enemy[i].h );
              }
           }

           //Render Enemy Attack 2
            if ( EAttack[i] > 0 && ETypeAttack[i] == 1 )
            {
              EAttack[i] -- ;
              if ( EDirect[i] == 1)
              {
                  if ( EAttack[i] >= 40 ) gSwordElf.render( ElfSwordPos[ ESPrepareAttackRight2 ].x, ElfSwordPos[ ESPrepareAttackRight2 ].y, ElfSwordPos[ ESPrepareAttackRight2 ].w, ElfSwordPos[ ESPrepareAttackRight2 ].h, enemy[i].x, enemy[i].y - 16 , enemy[i].w, enemy[i].h );
                  else gSwordElf.render( ElfSwordPos[ ESAttackRight2 ].x, ElfSwordPos[ ESAttackRight2 ].y, ElfSwordPos[ ESAttackRight2 ].w, ElfSwordPos[ ESAttackRight2 ].h, enemy[i].x, enemy[i].y - 16 , enemy[i].w, enemy[i].h );
              } else
              {
                  if ( EAttack[i] >= 40 ) gSwordElf.render( ElfSwordPos[ ESPrepareAttackLeft2 ].x, ElfSwordPos[ ESPrepareAttackLeft2 ].y, ElfSwordPos[ ESPrepareAttackLeft2 ].w, ElfSwordPos[ ESPrepareAttackLeft2 ].h, enemy[i].x, enemy[i].y - 16 , enemy[i].w, enemy[i].h );
                  else gSwordElf.render( ElfSwordPos[ ESAttackLeft2 ].x, ElfSwordPos[ ESAttackLeft2 ].y, ElfSwordPos[ ESAttackLeft2 ].w, ElfSwordPos[ ESAttackLeft2 ].h, enemy[i].x, enemy[i].y - 16 , enemy[i].w, enemy[i].h );
              }
           }


         }



    }
}
