#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int h, w;
  cin >> h >> w;

  int table[h][w], h_sum[h], w_sum[w];
  for (int i = 0; i < h; i++) {
    h_sum[i] = 0;
  }
  for (int i = 0; i < w; i++) {
    w_sum[i] = 0;
  }

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      int input;
      cin >> input;

      table[i][j] = input;
      h_sum[i] += input;
      w_sum[j] += input;
    }
  }

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cout << h_sum[i] + w_sum[j] - table[i][j] << " ";
    }
    cout << endl;
  }
}