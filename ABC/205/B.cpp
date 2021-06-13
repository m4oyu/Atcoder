#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i< (n) ; ++i)
using ll = long long;

int main() {
    int n;
    cin >> n;
    
    bool a[n];
    memset(a, false, sizeof(a));
    int in;
    rep(i, n) {
        cin >> in;
        a[in-1] = true;
    }
    bool ans = true;
    rep(i, n) {
        ans = ans && a[i];
    }
    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}