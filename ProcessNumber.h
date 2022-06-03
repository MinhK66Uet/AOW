#pragma once
#include <bits/stdc++.h>
#define pb push_back

//convert number into vector
vector <int> ProcessNumber(int a)
{
    vector <int> res, tmp; res.resize(0); tmp.resize(0);

    while (a > 0)
    {
        tmp.pb(a % 10);
        a /= 10;
    }

    for (int i = tmp.size() - 1; i >= 0; --i)
     res.pb(tmp[i]);

    if (res.size() == 0) res.pb(0);

    return res;
}
