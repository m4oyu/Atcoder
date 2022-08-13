#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

class LazySegTree
{
private:
    int sz;
    vector<int> seg, lazy;

public:
    LazySegTree::LazySegTree(vector<int> v)
    {
        sz = v.size();
        n = 1;
        while (n < sz)
            n *= 2;

        seg.resize(2 * n - 1, 0);
        lazy.resize(2 * n - 1, 0);
    }

    void eval(int k, int l, int r)
    {
        if (lazy[k] != 0)
        {
            seg[k] = max(seg[k], lazy[k]);
            if (r - l > 1)
            {
                lazy[2 * k + 1] = max(lazy[2 * k + 1], lazy[k]);
                lazy[2 * k + 2] = max(lazy[2 * k + 2], lazy[k]);
            }

            lazy[k] = 0;
        }
    }

    void update()
    {
    }

    int max_segment(int l, int r)
    {
    }
};

int w, n;
vector<int> l(250001), r(250001);

int main()
{
    cin >> w >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> l[i] >> r[i];
    }

    vector<int> compression;
    for (int i = 0; i < n; i++)
    {
        compression.push_back(l[i]);
        compression.push_back(r[i]);
    }

    sort(compression.begin(), compression.end());
    compression.erase(unique(compression.begin(), compression.end()), compression.end());
    for (int i = 0; i < n; i++)
    {
        l[i] = lower_bound(compression.begin(), compression.end(), l[i]) - compression.begin();
        r[i] = lower_bound(compression.begin(), compression.end(), r[i]) - compression.begin();
    }

    LazySegTree lazySegTree = LazySegTree(compression);
}