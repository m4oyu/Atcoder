#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    sort(s.begin(), s.end());

    do {
        bool ok = true;
        for (int i = 0; i < n - 1; i++) {
            string a = s[i];
            string b = s[i + 1];

            int count = 0;
            for (int j = 0; j < m; j++) {
                if (a[j] != b[j]) {
                    count++;
                }
            }

            if (1 < count) {
                ok = false;
            }
        }

        if (ok) {
            cout << "Yes" << endl;
            return 0;
        }
    } while (next_permutation(s.begin(), s.end()));
    cout << "No" << endl;
}