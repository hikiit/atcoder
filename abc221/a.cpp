#include <bits/stdc++.h>
#define lint long long
using namespace std;

int main(void)
{
    int a, b;

    cin >> a >> b;

    int sa = a - b;

    lint result = powl(32, sa);

    cout << result << endl;

    return 0;
}