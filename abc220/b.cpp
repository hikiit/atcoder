#include <bits/stdc++.h>
#define lint long long
using namespace std;

int main(void)
{
    int k;
    string a, b;

    cin >> k;

    if (k == 10)
    {
        lint aa, bb;
        cin >> aa >> bb;
        lint result = aa * bb;
        cout << result << endl;
        return 0;
    }

    cin >> a >> b;

    vector<int> av;
    vector<int> bv;

    for (auto ch : a)
    {
        av.push_back(ch - '0');
    }
    for (auto ch : b)
    {
        bv.push_back(ch - '0');
    }

    lint a10 = 0;
    int count = 0;
    for (auto i = av.begin(); i != av.end(); i++)
    {
        a10 += *i * pow(k, av.size() - count - 1);
        count++;
    }

    lint b10 = 0;
    count = 0;
    for (auto i = bv.begin(); i != bv.end(); i++)
    {
        b10 += *i * pow(k, bv.size() - count - 1);
        count++;
    }

    cout << a10 * b10 << endl;

    return 0;
}
