#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;

    string s, t;
    cin >> s >> t;

    bool isPrefix = false, isSuffix = false;

    if (s == t.substr(0, n)) {
        isPrefix = true;
    }
    if (s == t.substr(m - n, m)) {
        isSuffix = true;
    }

    if (isPrefix) {
        if (isSuffix) {
            cout << 0 << endl;
        } else {
            cout << 1 << endl;
        }
    } else {
        if (isSuffix) {
            cout << 2 << endl;
        } else {
            cout << 3 << endl;
        }
    }
}
