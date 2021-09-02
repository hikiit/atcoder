#include <bits/stdc++.h>
using namespace std;

// 誤答
int main(void)
{
    int n;
    int k;

    cin >> n >> k;

    string s;

    cin >> s;

    // (RLの個数 - 1) x 2 x Kが最大
    // ただし、端のLRを使う場合は1

    char last = 'N';
    int count2 = 0;
    int count1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (last == 'R' && s[i] == 'L')
        {
            count2++;
            if (i == 1 || i == n - 1)
            {
                count1++;
            }
        }

        last = s[i];
    }

    int result = min(count2, k) * 2;

    if (k - count2 <= count1)
    {
        result -= (k - count2);
    }

    cout << result << endl;

    return 0;
}
