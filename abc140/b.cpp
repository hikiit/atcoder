#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;

    cin >> n;

    int a[n];
    int b[n];
    int c[n - 1];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        cin >> c[i];
    }

    int result = 0;
    int last_eat = -1;
    for (int i = 0; i < n; i++)
    {
        if (last_eat + 1 == a[i])
        {
            result += c[a[i] - 2];
        }

        last_eat = a[i];

        result += b[a[i] - 1];
    }

    cout << result << endl;

    return 0;
}
