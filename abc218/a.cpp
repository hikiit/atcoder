#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    string s;

    cin >> n;
    cin >> s;

    if (s[n - 1] == 'o')
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
