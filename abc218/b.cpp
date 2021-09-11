#include <bits/stdc++.h>
using namespace std;

int main(void)
{

    string abc = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < 26; i++)
    {
        int n;
        cin >> n;
        cout << abc[n - 1];
    }
    cout << endl;

    return 0;
}
