#include <bits/stdc++.h>
#define lint long long
using namespace std;

int main(void)
{
    int a, b, c;

    cin >> a >> b >> c;

    int tmpc;
    for (int i = 1; i <= 1000; i++)
    {
        if (a <= tmpc and tmpc <= b)
        {
            cout << tmpc << endl;
            return 0;
        }
        tmpc = c * i;

        if (b < tmpc)
        {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;

    return 0;
}
