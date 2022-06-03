#pragma once
#include <bits/stdc++.h>

struct sCostUpd
{
    int gold, goldplus;
};

sCostUpd CostUpdate[1005];

void InitCostUpdate()
{
    //Economic
    CostUpdate[1].gold = 500;
    CostUpdate[1].goldplus = 150;

    //Defensive
    CostUpdate[2].gold = 200;
    CostUpdate[2].goldplus = 100;

    //Archery
    CostUpdate[3].gold = 300;
    CostUpdate[3].goldplus = 125;

    //HitPoint
    CostUpdate[4].gold = 350;
    CostUpdate[4].goldplus = 140;

    //Offensive
    CostUpdate[5].gold = 250;
    CostUpdate[5].goldplus = 115;

    //Socery
    CostUpdate[6].gold = 320;
    CostUpdate[6].goldplus = 135;
}
