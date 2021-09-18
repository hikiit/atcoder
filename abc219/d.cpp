#include <bits/stdc++.h>
#define lint long long
using namespace std;

// 誤答
int n, x, y;
int minResult = 999;

int boxCalc(list<pair<int, int>> ab, int sumBox, int sumx, int sumy)
{
    for (list<pair<int, int>>::iterator it = ab.begin(); it != ab.end(); it++)
    {
        pair<int, int> p = *it;

        if (p.first == -1)
        {
            continue;
        }

        sumBox++;
        sumx += p.first;
        sumy += p.second;

        if (minResult < sumBox)
        {
            return sumBox;
        }

        if (x <= sumx && y <= sumy)
        {
            return sumBox;
        }

        *it = make_pair(-1, -1);

        int r = boxCalc(ab, sumBox, sumx, sumy);
        if (r < minResult)
        {
            minResult = r;
        }
    }
}

int main(void)
{
    cin >> n;
    cin >> x >> y;

    list<pair<int, int>> ab;
    for (int i = 0; i < n; i++)
    {
        int tmpx, tmpy;
        cin >> tmpx >> tmpy;

        ab.push_back(make_pair(tmpx, tmpy));
    }

    int result = boxCalc(ab, 0, 0, 0);

    if (minResult == 999)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << minResult << endl;
    }

    // for (auto i = ab.begin(); i != ab.end(); i++)
    // {
    //     pair<int, int> p = *i;
    //     cout << p.first << " " << p.second << endl;
    // }

    return 0;
}
