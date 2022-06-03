#pragma once
#include <bits/stdc++.h>
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "InitSDL.h"
#include "getmousepos.h"
#include "inittroop.h"
#include "spawnarrow.h"
#include "spawneffect.h"
#include "InitBase.h"

//find nearest troop
int FindTroop(int team,int i)
{
    int res = -1, x = Troop[team][i].x , range = Troop[team][i].range;

    x = x + Troop[team][i]._x;

    if (team == 1)
    {
       for (int j = 0; j < Troop[2].size(); ++j)
       {
            int _x = Troop[2][j].x + Troop[2][j]._x;
            if (_x < x) continue;
            if (abs(_x - x) <= range) {res = j; break;}
       }
    } else
    {
       for (int j = 0; j < Troop[1].size(); ++j)
       {
            int _x = Troop[1][j].x + Troop[1][j]._x;
            if (_x > x) continue;
            if (abs(_x - x) <= range) {res = j; break;}
       }
    }

    return res;
}

void TroopDealDamage(int team, int i, int j)
{
    //sharpshooter
    if (Troop[team][i].type == 1)
    {
        if (Troop[team][i].attackspeed == 124)
        {
          int x = Troop[team][i].x, y = Troop[team][i].y;
          x = x + Troop[team][i]._x;
          SpawnArrow(team,i,1,x,y + 30);
        }

        return;
    } else
    //sword
    if (Troop[team][i].type == 2)
    {
        if (Troop[team][i].attackspeed == 74)
        {
           if (j != -1 && j != CBASE)
           {
             Troop[3 - team][j].physicdmg += ( 20 + 20 * Offensive[team] * 10 / 100);
             int x = Troop[3 - team][j].x + Troop[3 - team][j]._x, y = Troop[3 - team][j].y + Troop[3 - team][j]._y;

             Troop[team][i].heal += Troop[team][i].lifesteal * ( 20 + 20 * Offensive[team] * 10 / 100) * 100 / (100 + Troop[3 - team][j].armor) / 100;

             SpawnEffect(3 - team, x, y, 40, 40, 1, 15);
           } else
           if ( j == CBASE )
           {
             Base[3 - team].physicdmg += ( 20 + 20 * Offensive[team] * 10 / 100);
           }
        }

        return;
    } else
    //Elfsoc
    if (Troop[team][i].type == 4)
    {
        if (Troop[team][i].attackspeed == 1440)
        {
            int tmp = 50;
            for (int k = 0; k < Troop[3 - team].size(); ++ k)
            if (Troop[3 - team][k].x != -1)
            {
                int x = Troop[3 - team][k].x + Troop[3 - team][k]._x, y = Troop[3 - team][k].y + Troop[3 - team][k]._y, w = Troop[3 - team][k].w, h = Troop[3 - team][k].h;

                if (abs(Troop[team][i].x + Troop[team][i]._x - x) > 425) continue;
                if (tmp <= 0) break;

                tmp--;

                Troop[3 - team][k].magicdmg += ( 45 + 45 * Socery[team] * 10 / 100);
                Troop[team][i].heal += Troop[team][i].lifesteal * ( 45 + 45 * Socery[team] * 10 / 100) * 100 / (100 + Troop[3 - team][j].resistant) / 100;
                Troop[3 - team][k].rooted = max(Troop[3 - team][k].rooted, 400);
                SpawnEffect(2, x + 8, y + 20, Troop[3 - team][k].rw * 3 / 2 , Troop[3 - team][k].rh / 2, 4, 400);
            }

        }
        return;
    } else
    //buthcer
    if (Troop[team][i].type == 5)
    {
        if (Troop[team][i].attackspeed == 74 && Troop[team][i].typeattack == 1)
        {
           if (j != -1 && j != CBASE)
           {
             Troop[3 - team][j].physicdmg += ( 34 + 34 * Offensive[team] * 10 / 100);
             int x = Troop[3 - team][j].x + Troop[3 - team][j]._x, y = Troop[3 - team][j].y + Troop[3 - team][j]._y;

             Troop[team][i].heal += Troop[team][i].lifesteal * ( 34 + 34 * Offensive[team] * 10 / 100) * 100 / (100 + Troop[3 - team][j].armor) / 100;

             SpawnEffect(3 - team, x, y, 40, 40, 1, 15);
           } else
           if ( j == CBASE )
           {
             Base[3 - team].physicdmg += ( 34 + 34 * Offensive[team] * 10 / 100);
           }
        }

        return;
    } else
    //Gold sharpshooter
    if (Troop[team][i].type == 6)
    {
        if (Troop[team][i].attackspeed == 124)
        {
          int x = Troop[team][i].x, y = Troop[team][i].y;
          x = x + Troop[team][i]._x;
          SpawnArrow(team,i,2,x,y + 30);
        }

        return;
    }

}

void DeleteTroop(int team,int i)
{
    Troop[team][i].x = -1;
    Troop[team][i].y = -1;
    Troop[team][i].hp = -1;
}

void TroopTakeDamage(int team,int i)
{
    Troop[team][i].hp -= Troop[team][i].physicdmg * 100 / (100 + Troop[team][i].armor);
    Troop[team][i].hp -= Troop[team][i].magicdmg * 100 / (100 + Troop[team][i].resistant);
    Troop[team][i].hp -= Troop[team][i].truedmg;

    Troop[team][i].hp -= Troop[team][i].rphysicdmg * 100 / (100 + Troop[team][i].armor);
    Troop[team][i].hp -= Troop[team][i].rmagicdmg * 100 / (100 + Troop[team][i].resistant);
    Troop[team][i].hp -= Troop[team][i].rtruedmg;

    //troop die
    if (Troop[team][i].hp <=0 )
    {
        SpawnEffect(team, Troop[team][i].x + Troop[team][i]._x, Troop[team][i].y, Troop[team][i].w - Troop[team][i]._x, Troop[team][i].h - Troop[team][i]._y + 10, 2, 15);
        DeleteTroop(team,i);
    }

    Troop[team][i].physicdmg = 0;
    Troop[team][i].magicdmg = 0;
    Troop[team][i].truedmg = 0;
    Troop[team][i].rphysicdmg = 0;
    Troop[team][i].rmagicdmg = 0;
    Troop[team][i].rtruedmg = 0;
}

void TroopHeal(int team, int i)
{
    if (Troop[team][i].heal > 0)
    {
      Troop[team][i].hp += Troop[team][i].heal;
      Troop[team][i].heal = 0;
      Troop[team][i].hp = min(Troop[team][i].hp, Troop[team][i].maxhp);
      //SpawnEffect(team, Troop[team][i].x + Troop[team][i]._x + 8, Troop[team][i].y + 18, Troop[team][i].w - Troop[team][i]._x - 40, Troop[team][i].h - Troop[team][i]._y - 15, 3, 50);
      SpawnEffect(team, Troop[team][i].x + Troop[team][i]._x + 8, Troop[team][i].y + 18, Troop[team][i].rw, Troop[team][i].rh / 5 * 3, 3, 50);
    }
}

void ChangeAttackType(int team, int i)
{
    if (Troop[team][i].type == 2)
    {
        Troop[team][i].typeattack = 3 - Troop[team][i].typeattack;
        return;
    }
}

//check if troop is not a support
bool CheckTroop(int team,int i)
{
    if (Troop[team][i].type == 3) return true;
    return false;
}

//support
bool TroopSupport(int team, int i)
{
     int x = Troop[team][i].x + Troop[team][i]._x;
     //Meric
     if (Troop[team][i].type == 3)
     {
         int j = -1;
         for (int k = 0; k < Troop[team].size(); ++k )
         if (Troop[team][k].x != -1 && Troop[team][k].hp < Troop[team][k].maxhp)
         {
             int x = Troop[team][i].x + Troop[team][i]._x, x2 = Troop[team][k].x + Troop[team][k]._x;
             if (abs(x - x2) > 300) continue;
             j = k;
             break;
         }

         if (j != -1)
         {
            Troop[team][i].attacking = true;

            if (Troop[team][i].attackspeed > 0) Troop[team][i].attackspeed --;

            if (Troop[team][i].attackspeed == 150) Troop[team][j].heal += (20 + 20 * Socery[1] * 10 / 100);

            if (Troop[team][i].attackspeed <= 0)
            {
               Troop[team][i].attackspeed = Troop[team][i].maxattackspeed;
            }

            return true;
         } else
         {
            int j = FindTroop(team,i);

            if (Troop[team][i].attackspeed > 0) Troop[team][i].attackspeed --;

            if (j != -1)
            {
                Troop[team][i].attacking = true;

                return true;
            } else
            {
                int xBase = 130;
                if (team == 1) xBase = 2855;
                if (abs(x - xBase) <= Troop[team][i].range)
                {
                    Troop[team][i].attacking = true;

                    return true;
                }
            }
         }

     }
     //_____________________________________________________________________

}

void EffectTroop(int team,int i)
{
    if (Troop[team][i].rooted > 0) Troop[team][i].rooted --;
}

void ProcessTroop(int team, int i)
{
     int x = Troop[team][i].x , y = Troop[team][i].y, w = Troop[team][i].w, h = Troop[team][i].h;
     int indle = Troop[team][i].indle , type = Troop[team][i].type, speed = Troop[team][i].speed;

     Troop[team][i].moving = false; Troop[team][i].attacking = false; bool ok = false;

     EffectTroop(team,i);

     //attack
     if ( !CheckTroop(team,i))
     {
       int j = FindTroop(team,i);

       if (Troop[team][i].attackspeed > 0) Troop[team][i].attackspeed --;

       if (j != -1)
       {
         Troop[team][i].attacking = true;

         if (Troop[team][i].attackspeed > 0) ok = true; else
         {
             Troop[team][i].attackspeed = Troop[team][i].maxattackspeed;
             ChangeAttackType(team, i);
         }
       } else
       {
         int xBase = 130;
         if (team == 1) xBase = 2855;
         if (abs(x - xBase) <= Troop[team][i].range)
         {
            Troop[team][i].attacking = true;

            if (Troop[team][i].attackspeed > 0) ok = true; else
            {
               Troop[team][i].attackspeed = Troop[team][i].maxattackspeed;
               ChangeAttackType(team, i);
            }
            j = CBASE;
         }
       }

       TroopDealDamage(team,i,j);
     } else
     {
         ok = TroopSupport(team, i);
     }

     //Effect rooted
     if (Troop[team][i].rooted > 0) {ok = true; Troop[team][i].speed = 0;}

     //move
     if (Troop[team][i].speed > 0 && Troop[team][i].rooted <= 0) {Troop[team][i].speed --; Troop[team][i].moving = true;}

     if ( Troop[team][i].speed <=0 && Troop[team][i].attacking == false && Troop[team][i].rooted <= 0)
     {
         Troop[team][i].indle = -1;

         int val = 1;
         if (team == 2) val = -1;

         Troop[team][i].x = Troop[team][i].x + Troop[team][i].moverange * val;

         Troop[team][i].speed = Troop[team][i].maxspeed;
     }

     if ( Troop[team][i].moving == false && ok == true && Troop[team][i].indle < 0) Troop[team][i].indle = 0;

     //indle
     if (Troop[team][i].indle >= 0)
     {
       Troop[team][i].indle ++;
       if ( Troop[team][i].indle > Troop[team][i].maxindle) Troop[team][i].indle = 0;
     }

     TroopTakeDamage(team,i);
     TroopHeal(team,i);

     return;
}
