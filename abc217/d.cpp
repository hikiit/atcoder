#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void)
{

    int L, Q, C, X;
    set<int> t;

    cin >> L >> Q;

    t.insert(0);
    t.insert(L);

    for (int i = 0; i < Q; i++)
    {
        cin >> C >> X;

        if (C == 1)
        {
            t.insert(X);
        }
        else
        {
            auto lb = t.lower_bound(X);

            int e = *lb;
            int b = *prev(lb);

            cout << e - b << endl;
        }
    }

    return 0;
}

/* 誤答
int main(void)
{
    long long l, q;
    long long c, x;

    cin >> l >> q;

    vector<long long> t(l + 1);

    for (long long i = 0; i < l + 1; i++)
    {
        t[i] = 1;
    }

    t[0] = 0;
    t[l] = 0;

    for (long long i = 0; i < q; i++)
    {
        cin >> c >> x;
        long long count = 0;

        if (c == 1)
        {
            t[x] = 0;
        }

        if (c == 2)
        {

            for (long long j = x; j < l + 1; j++)
            {
                if (t[j] == 0)
                {
                    break;
                }
                count = count + 1;
            }

            for (long long j = x; 0 < j; --j)
            {
                if (t[j] == 0)
                {
                    break;
                }
                count = count + 1;
            }

            cout << count << endl;
        }
    }

    return 0;
}
*/
