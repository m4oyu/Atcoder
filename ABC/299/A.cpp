#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '|') {
            count++;
        } else if (s[i] == '*' && count == 1) {
            cout << "in" << endl;
            break;
        }

        if (count == 2) {
            cout << "out" << endl;
            break;
        }
    }
}