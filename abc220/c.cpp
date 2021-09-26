#include <bits/stdc++.h>
#define lint long long
using namespace std;

int main(void)
{
    int n;
    lint x;

    cin >> n;
    vector<lint> avec(n);
    for (int i = 0; i < n; i++)
        cin >> avec[i];

    cin >> x;

    lint box = 0;
    for (auto it = avec.begin(); it != avec.end(); it++)
    {
        box += (lint)*it;
    }

    lint tmpx = x / box;

    lint result = tmpx * avec.size();

    box = box * tmpx;
    for (auto it = avec.begin(); it != avec.end(); it++)
    {
        box += *it;
        result++;

        if (x < box)
        {
            break;
        }
    }

    cout << result << endl;

    return 0;
}
