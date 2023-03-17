#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n, k;
    cin >> n >> k;

    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    ll diff = 0;
    for (int i = 0; i < n; i++)
    {
        diff += abs(a[i]-b[i]);
    }

    if(diff <= k && (k-diff)%2 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;    
}