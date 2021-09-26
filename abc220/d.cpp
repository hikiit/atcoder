#include <bits/stdc++.h>
#define lint long long
using namespace std;

// 誤答

vector<lint> g_count = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

int opeF(list<int> li);
int opeG(list<int> li);

int opeF(list<int> li)
{
    int x = *li.begin();
    li.pop_front();
    int y = *li.begin();
    li.pop_front();

    li.push_front((x + y) % 10);

    if (li.size() == 1)
    {
        g_count[*li.begin()] += 1;
    }
    else
    {
        opeF(li);
        opeG(li);
    }

    return 0;
}

int opeG(list<int> li)
{
    int x = *li.begin();
    li.pop_front();
    int y = *li.begin();
    li.pop_front();

    li.push_front((x * y) % 10);

    if (li.size() == 1)
    {
        g_count[*li.begin()] += 1;
    }
    else
    {
        opeF(li);
        opeG(li);
    }

    return 0;
}

int main(void)
{
    int n;
    cin >> n;

    int tmp;
    list<int> listc(n);
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        listc.push_back(tmp);
    }

    opeF(listc);
    opeG(listc);

    for (auto it = g_count.begin(); it != g_count.end(); it++)
    {
        cout << *it % (lint)998244353 << endl;
    }

    return 0;
}
