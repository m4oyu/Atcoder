#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

// 素数を列挙する関数、必要なかった
// vector<ll> eratosthenes(ll n)
// {
//     vector<bool> is_prime(n + 1);
//     for (ll i = 0; i <= n; i++)
//     {
//         is_prime[i] = true;
//     }
//     vector<ll> p;
//     for (ll i = 2; i <= n; i++)
//     {
//         if (is_prime[i])
//         {
//             for (ll j = 2 * i; j <= n; j += i)
//             {
//                 is_prime[j] = false;
//             }
//             p.emplace_back(i);
//         }
//     }
//     return p;
// }

int main()
{
    ll a, b;
    ll m = 1000000000000000000LL;
    cin >> a >> b;

    // a*bでoverflowするためb*cで先にnによる除算を入れる

    ll n = gcd(a, b);

    ll c = a / n;

    if (b <= m / c)
        cout << b * c << endl;
    else
        cout << "Large" << endl;

    return 0;
}
