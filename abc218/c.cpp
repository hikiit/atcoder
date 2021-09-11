#include <bits/stdc++.h>
using namespace std;

// 誤答
int check(vector<int> s1x, vector<int> s1y, vector<int> s2x, vector<int> s2y)
{
    int result = 0;
    for (int i = 0; i < s1x.size(); i++)
    {
        if (s1x[i] == s2x[i] && s1y[i] == s2y[i])
        {
        }
        else
        {
            result = 1;
        }
    }

    return result;
}

int main(void)
{

    int n;
    cin >> n;

    vector<int> s1x;
    vector<int> s1y;
    vector<int> s2x;
    vector<int> s2y;

    int LEN = 99999;
    int minX1 = LEN;
    int minY1 = LEN;

    int minX2 = LEN;
    int minY2 = LEN;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char t;
            cin >> t;

            if (t == '#')
            {
                s1x.push_back(j);
                s1y.push_back(i);
                if (j < minX1)
                {
                    minX1 = j;
                }
                if (i < minY1)
                {
                    minY1 = i;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char t;
            cin >> t;

            if (t == '#')
            {
                s2x.push_back(j);
                s2y.push_back(i);
                if (j < minX2)
                {
                    minX2 = j;
                }
                if (i < minY2)
                {
                    minY2 = i;
                }
            }
        }
    }

    for (int i = 0; i < s1x.size(); i++)
    {
        s1x[i] = s1x[i] - minX1;
        s1y[i] = s1y[i] - minY1;
    }

    // 通常
    auto s2x0 = s2x;
    auto s2y0 = s2y;

    for (int i = 0; i < s2x0.size(); i++)
    {
        s2x0[i] = s2x0[i] - minX2;
        s2y0[i] = s2y0[i] - minY2;
    }

    if (check(s1x, s1y, s2x0, s2y0) == 0)
    {
        cout << "Yes" << endl;
        return 0;
    }

    // 90
    auto s2x90 = s2y0;
    auto s2y90 = s2x0;
    reverse(s2y90.begin(), s2y90.end());

    int min = *min_element(s2x90.begin(), s2x90.end());
    for (int i = 0; i < s2x90.size(); i++)
    {
        s2x90[i] = s2x90[i] - min;
    }

    if (check(s1x, s1y, s2x90, s2y90) == 0)
    {
        cout << "Yes" << endl;
        return 0;
    }

    // 180
    auto s2x180 = s2y90;
    auto s2y180 = s2x90;
    reverse(s2y180.begin(), s2y180.end());

    min = *min_element(s2x180.begin(), s2x180.end());
    for (int i = 0; i < s2x180.size(); i++)
    {
        s2x180[i] = s2x180[i] - min;
    }

    if (check(s1x, s1y, s2x180, s2y180) == 0)
    {
        cout << "Yes" << endl;
        return 0;
    }

    // 270
    auto s2x27 = s2y180;
    auto s2y27 = s2x180;
    reverse(s2y27.begin(), s2y27.end());

    min = *min_element(s2x27.begin(), s2x27.end());
    for (int i = 0; i < s2x27.size(); i++)
    {
        s2x27[i] = s2x27[i] - min;
    }

    if (check(s1x, s1y, s2x27, s2y27) == 0)
    {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
    return 0;
}
