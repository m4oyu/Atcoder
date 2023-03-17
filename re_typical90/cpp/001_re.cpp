#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll N, L, K;
ll A[1 << 18];

bool solve(ll mid)
{
    ll current = 0;
    ll cnt = 0;

    for (ll i = 1; i < N + 1; i++)
    {
        if (mid <= A[i] - current)
        {
            current = A[i];
            cnt++;
        }
        if (i == N && mid <= L - current)
        {
            cnt++;
        }

        // cout << i << ": " << current << ", " << cnt << endl;

        if (K < cnt)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    cin >> N >> L >> K;

    for (ll i = 1; i < N + 1; i++)
    {
        cin >> A[i];
    }

    ll left = -1;
    ll right = L + 1;

    while (right - left > 1)
    {
        ll mid = left + (right - left) / 2;

        // cout << "left mid right: " << left << " " << mid << " " << right << endl;

        if (solve(mid))
        {
            // cout << "=> true" << endl;
            left = mid;
        }
        else
        {
            // cout << "=> false" << endl;
            right = mid;
        }
    }

    cout << left << endl;

    return 0;
}
