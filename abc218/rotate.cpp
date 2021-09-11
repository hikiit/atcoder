#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n = 5;
    vector<vector<int>> data(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            data.at(i).at(j) = (i + 1) * 10 + j + 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << data.at(i).at(j) << " ";
        }
        cout << endl;
    }

    cout << endl;

    // 配列90度回転
    auto data2 = data;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            data2.at(j).at(n - i - 1) = data.at(i).at(j);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << data2.at(i).at(j) << " ";
        }
        cout << endl;
    }

    return 0;
}
