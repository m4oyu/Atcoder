#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void inc(int a, int b) {
    for (int i = a + 1; i < b; i++) {
        cout << i << " ";
    }
}
void dec(int a, int b) {
    for (int i = a - 1; i > b; i--) {
        cout << i << " ";
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++) {
        cout << a[i] << " ";
        if (a[i] < a[i + 1]) {
            inc(a[i], a[i + 1]);
        } else {
            dec(a[i], a[i + 1]);
        }
    }

    cout << a[n - 1] << endl;
    return 0;
}