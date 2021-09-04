#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int result = 0;
    string a;
    string b;
    string c;

    cin >> a;
    cin >> b;
    cin >> c;

    int abc = 10;
    int arc = 11;
    int agc = 12;
    int ahc = 13;

    int r = abc + arc + agc + ahc;

    if (a == "ABC" || b == "ABC" || c == "ABC")
    {
        r -= abc;
    }

    if (a == "ARC" || b == "ARC" || c == "ARC")
    {
        r -= arc;
    }

    if (a == "AGC" || b == "AGC" || c == "AGC")
    {
        r -= agc;
    }

    if (a == "AHC" || b == "AHC" || c == "AHC")
    {
        r -= ahc;
    }

    if (r == abc)
    {
        cout << "ABC" << endl;
    }

    if (r == arc)
    {
        cout << "ARC" << endl;
    }

    if (r == agc)
    {
        cout << "AGC" << endl;
    }

    if (r == ahc)
    {
        cout << "AHC" << endl;
    }

    return 0;
}
