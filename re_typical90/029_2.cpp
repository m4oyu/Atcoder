#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

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

    int height[n * 2] = {};
    for (int i = 0; i < n; i++)
    {
        int m = 0;
        for (int j = l[i]; j <= r[i]; j++)
        {
            m = max(m, height[j]);
        }
        cout << m + 1 << endl;
        for (int j = l[i]; j <= r[i]; j++)
        {
            height[j] = m + 1;
        }
    }
    return 0;
}