#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int a, b;
    cin >> a >> b;

    if (b - a == 1 && a != 3 && a != 6) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}