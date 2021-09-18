#include <bits/stdc++.h>
#define lint long long
using namespace std;

int main(void)
{
    int x;
    cin >> x;

    if (x < 40)
    {
        cout << 40 - x;
    }
    else if (x < 70)
    {
        cout << 70 - x;
    }
    else if (x < 90)
    {
        cout << 90 - x;
    }
    else
    {
        cout << "expert";
    }

    cout << endl;
    return 0;
}
