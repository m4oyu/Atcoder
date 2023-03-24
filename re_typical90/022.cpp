#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll euclidean(ll a, ll b){
    ll r = a % b;
    while (r > 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

int main() {
    ll a, b, c;
    cin >> a >> b >> c;

    // 3数の最小公倍
    ll e = euclidean(a, b);
    e = euclidean(e, c);

    ll ans = (a/e-1)+(b/e-1)+(c/e-1);
    cout << ans << endl;    
}