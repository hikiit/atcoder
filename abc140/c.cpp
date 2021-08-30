#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;

    cin >> n;

    int b[n];

    for (int i = 0; i < n - 1; i++)
    {
        cin >> b[i];
    }

    int result = 0;
    result += b[0];
    result += b[n - 2];

    for (int i = 0; i < n - 2; i++)
    {
        result += min(b[i], b[i + 1]);
    }

    cout << result << endl;

    return 0;
}
