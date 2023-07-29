#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string input;
    cin >> input;

    vector<string> a = {"ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};

    for (auto &&i : a) {
        if (input == i) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
}
