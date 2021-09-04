#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int result = 0;
    int n;

    cin >> n;

    int p[n];

    int q[n];

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    for (int i = 0; i < n; i++)
    {
        q[p[i] - 1] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << q[i];

        if (i != n - 1)
        {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}
