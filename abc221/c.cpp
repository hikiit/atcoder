#include <bits/stdc++.h>
#define lint long long
using namespace std;

// 誤答

int main(void)
{
    string N;
    cin >> N;
    vector<int> ND;

    for (int i = 0; i < N.length(); i++)
    {
        ND.push_back((int)N[i] - '0');
    }
    sort(ND.begin(), ND.end(), greater<int>());

    int a = 0;
    int b = 0;
    int lastCountA = 0;
    int lastCountB = 0;
    if (ND.size() % 2 == 0)
    {
        for (auto it = ND.begin(); it != ND.end(); it++)
        {
            if (a == 0 && b == 0)
            {
                a = *it;
                it++;
                b = *it;
                continue;
            }

            if (lastCountB < 1)
            {
                b = b * 10;
                b += *it;
                lastCountB++;
                if (lastCountB == 1)
                {
                    lastCountA = 0;
                }
                // cout << b << endl;
            }
            else if (lastCountA < 1)
            {
                a = a * 10;
                a += *it;
                lastCountA++;
                if (lastCountA == 1)
                {
                    lastCountB = 0;
                }
                // cout << a << endl;
            }
        }
    }
    else
    {
        for (auto it = ND.begin(); it != ND.end(); it++)
        {
            if (a == 0 && b == 0)
            {
                a = *it;
                it++;
                b = *it;
                lastCountA++;
                lastCountB++;
                continue;
            }

            if (lastCountB < 2)
            {
                b = b * 10;
                b += *it;
                lastCountB++;
                if (lastCountB == 2)
                {
                    lastCountA = 0;
                }
                // cout << b << endl;
            }
            else if (lastCountA < 2)
            {
                a = a * 10;
                a += *it;
                lastCountA++;
                if (lastCountA == 2)
                {
                    lastCountB = 0;
                }
                // cout << a << endl;
            }
        }
    }

    lint result = (lint)a * (lint)b;
    cout << result << endl;

    return 0;
}
