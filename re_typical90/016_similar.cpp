#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int N, A, B, C;
    cin >> N >> A >> B >> C;

    int x, y;
    x = N / A;
    for (int i = x; i >= 0; i--) {
        y = (N - A * i) / B;
        for (int j = y; j >= 0; j--) {
            if ((N - A * i - B * j) % C == 0) {
                cout << i + j + (N - A * i - B * j) / C << endl;
                return 0;
            }
        }
    }
}