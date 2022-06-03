#pragma once
#include <bits/stdc++.h>
#include "InitResource.h"

void ProcessResource()
{
     if (!Pause)
     {
        TimeGold[1] --;
        TimeGold[2] --;

        if (TimeGold[1] <= 0)
        {
            TimeGold[1] = MaxTimeGold[1];
            Gold[1] += PlusGold[1] + Economic[1] * 5;
            Gold[1] = min(Gold[1], MaxGold[1]);
        }

        if (TimeGold[2] <= 0)
        {
            TimeGold[2] = MaxTimeGold[2];
            Gold[2] += PlusGold[2] + Economic[2] * 5;
            Gold[2] = min(Gold[2], MaxGold[2]);
        }
     }
}
