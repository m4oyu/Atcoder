#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string n;
    cin >> n;

    for (size_t i = 0; i < n.size(); i++) {
        if (n[i] <= n[i + 1]) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}