#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;

    int a[100000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int left = 0, right = 0;
    int ans = 0;
    map<int, int> m;
    while (left < n) {
        while (right < n && m.size() <= k) {
            if (m.count(a[right]) == 0) {
                if (m.size() == k) {
                    break;
                }
                m.insert(make_pair(a[right], 1));
            } else {
                m[a[right]]++;
            }

            right++;
        }

        ans = max(ans, right - left);

        m[a[left]]--;
        if (m[a[left]] == 0) {
            m.erase(a[left]);
        }

        left++;
    }

    cout << ans << endl;
}
