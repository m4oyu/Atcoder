#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;

    vector<bool> a(n + 1);

    for (int i = 0; i < m; i++) {
        int b;
        cin >> b;
        a[b] = true;
    }

    vector<int> ans(n + 1);
    int count = 0;
    for (int i = n; i > 0; i--) {
        if (a[i]) {
            count = 0;
            ans[i] = count;
        } else {
            count++;
            ans[i] = count;
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}
