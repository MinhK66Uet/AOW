#pragma once
#include <bits/stdc++.h>
#include "InitUpdate.h"

void ProcessUpdate(int team, int type)
{
     int _type = type;

     int gold = CostUpdate[_type].gold;

     if (_type == 1) gold += CostUpdate[_type].goldplus * Economic[team];
     if (_type == 2) gold += CostUpdate[_type].goldplus * Defensive[team];
     if (_type == 3) gold += CostUpdate[_type].goldplus * Archery[team];
     if (_type == 4) gold += CostUpdate[_type].goldplus * HitPoint[team];
     if (_type == 5) gold += CostUpdate[_type].goldplus * Offensive[team];
     if (_type == 6) gold += CostUpdate[_type].goldplus * Socery[team];


     if (team == 1)
     {
         if (Gold[1] < gold) return;
         Gold[1] -= gold;

         if (_type == 1) Economic[1] ++;
         if (_type == 2) Defensive[1] ++;
         if (_type == 3) Archery[1] ++;
         if (_type == 4) HitPoint[1] ++;
         if (_type == 5) Offensive[1] ++;
         if (_type == 6) Socery[1] ++;
     } else
     {
         if (Gold[2] < gold) return;
         Gold[2] -= gold;

         if (_type == 1) Economic[2] ++;
         if (_type == 2) Defensive[2] ++;
         if (_type == 3) Archery[2] ++;
         if (_type == 4) HitPoint[2] ++;
         if (_type == 5) Offensive[2] ++;
         if (_type == 6) Socery[2] ++;
     }
}
