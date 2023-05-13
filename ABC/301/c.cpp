#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string alphabet = "abcdefghijklmnopqrstuvwxyz";

int main() {
    string s, t;
    cin >> s >> t;

    map<char, int> counts;
    for (char c : alphabet) {
        counts[c] = 0;
    }

    int wc_s = 0, wc_t = 0;

    for (char c : s) {
        if (c == '@') {
            wc_s++;
        } else {
            counts[c]++;
        }
    }

    for (char c : t) {
        if (c == '@') {
            wc_t++;
        } else {
            counts[c]--;
        }
    }

    for (char c : alphabet) {
        int x = counts.count(c);
        if (x == 0) {
            continue;
        }

        x = counts[c];
        if (x < 0) {
            if ((c == 'a' || c == 't' || c == 'c' || c == 'o' || c == 'd' ||
                 c == 'e' || c == 'r') &&
                0 < wc_s) {
                wc_s -= x;
            } else {
                cout << "No" << endl;
                return 0;
            }
        } else if (x > 0) {
            if ((c == 'a' || c == 't' || c == 'c' || c == 'o' || c == 'd' ||
                 c == 'e' || c == 'r') &&
                0 < wc_t) {
                wc_t -= x;
            } else {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
}