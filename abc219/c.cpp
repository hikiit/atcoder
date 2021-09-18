#include <bits/stdc++.h>
#define lint long long
using namespace std;

bool comp(vector<int> v1, vector<int> v2)
{
    int minSize = min(v1.size(), v2.size());

    for (int i = 0; i < minSize; i++)
    {
        if (v1[i] > v2[i])
        {
            return false;
        }
        else if (v1[i] < v2[i])
        {
            return true;
        }
    }

    if (v1.size() > v2.size())
    {
        return false;
    }
    else if (v1.size() < v2.size())
    {
        return true;
    }
    return false;
}

int main(void)
{
    string s;
    int n;

    cin >> s;

    map<char, int> m;
    map<int, char> m2;

    for (int i = 0; i < s.size(); i++)
    {
        m.insert(make_pair(s[i], i));
        m2.insert(make_pair(i, s[i]));
    }

    cin >> n;
    vector<vector<int>> str(n);

    for (int i = 0; i < n; i++)
    {
        string tmp;
        cin >> tmp;

        for (int j = 0; j < tmp.size(); j++)
        {
            str.at(i).push_back(m[tmp[j]]);
        }
    }

    sort(str.begin(), str.end(), comp);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < str.at(i).size(); j++)
        {
            cout << m2[str.at(i).at(j)];
        }
        cout << endl;
    }

    return 0;
}
