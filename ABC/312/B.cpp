#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> s(110, vector<char>(110, '*'));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> s[i][j];
        }
    }

    int black[18][2] = {
        {0, 0}, {0, 1}, {0, 2}, {1, 0}, {1, 1}, {1, 2}, {2, 0}, {2, 1}, {2, 2},
        {6, 6}, {6, 7}, {6, 8}, {7, 6}, {7, 7}, {7, 8}, {8, 6}, {8, 7}, {8, 8},
    };
    int white[14][2] = {
        {0, 3}, {1, 3}, {2, 3}, {3, 0}, {3, 1}, {3, 2}, {3, 3},
        {5, 5}, {5, 6}, {5, 7}, {5, 8}, {6, 5}, {7, 5}, {8, 5},
    };

    for (int i = 0; i <= n - 9; i++) {
        for (int j = 0; j <= m - 9; j++) {
            bool flag = true;
            for (auto &&b : black) {
                if (s[i + b[0]][j + b[1]] != '#') {
                    flag = false;
                    break;
                }
            }
            for (auto &&w : white) {
                if (s[i + w[0]][j + w[1]] != '.' || !flag) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                cout << i + 1 << " " << j + 1 << endl;
            }
        }
    }
}