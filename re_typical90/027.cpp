#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    map<string, int> m;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (m.count(s) == 0) {
            m[s] = 1;
            cout << i+1 << endl;
        }
    }
}
