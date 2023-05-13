#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int t = 0;
    int a = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'T') {
            t++;
        } else {
            a++;
        }
    }
    if (t < a) {
        cout << "A" << endl;
    } else if (a < t) {
        cout << "T" << endl;
    } else {
        if (s[n - 1] == 'T') {
            cout << "A" << endl;
        } else {
            cout << "T" << endl;
        }
    }
    return 0;
}