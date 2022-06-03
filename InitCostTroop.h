#pragma once
#include <bits/stdc++.h>

struct sCost
{
    int gold;
};

sCost Cost[1005];

void InitCostTroop()
{
     //sharpshooter
     Cost[1].gold = 60;

     //elf sword
     Cost[2].gold = 40;

     //Meric
     Cost[3].gold = 125;

     //elf soccerer
     Cost[4].gold = 300;

     //Gold sharpshooter
     Cost[6].gold = 420;
}
