#include <bits/stdc++.h>
#define lint long long
using namespace std;

int main(void)
{
    string s, t;

    cin >> s;
    cin >> t;

    int countsite = -1;
    int count = 0;
    char a1 = '0';
    char a2 = '0';
    char b1 = '0';
    char b2 = '0';
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != t[i] && count == 0)
        {
            countsite = i;
            count++;
            a1 = s[i];
            b1 = t[i];
        }
        else if (s[i] != t[i] && count == 1 && countsite == i - 1)
        {
            count++;
            a2 = s[i];
            b2 = t[i];
        }
        else if (2 < count)
        {
            cout << "No" << endl;
            return 0;
        }
    }

    if ((a1 == b2 && a2 == b1) || count == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
