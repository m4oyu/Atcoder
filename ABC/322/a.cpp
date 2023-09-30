#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    for (int i = 0; i < n - 2; i++) {
        string check = s.substr(i, 3);
        if (check == "ABC") {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
