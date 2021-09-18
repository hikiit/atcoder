#include <bits/stdc++.h>
#define lint long long
using namespace std;

int main(void)
{

    string s1, s2, s3, t;

    cin >> s1;
    cin >> s2;
    cin >> s3;
    cin >> t;

    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] == '1')
        {
            cout << s1;
        }
        else if (t[i] == '2')
        {
            cout << s2;
        }
        else if (t[i] == '3')
        {
            cout << s3;
        }
    }

    cout << endl;

    return 0;
}
