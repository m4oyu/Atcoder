#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

// int main() {
//   int n, m;
//   cin >> n >> m;

//   vector<vector<int>> G(n);
//   for (int i = 0; i < m; i++) {
//     int a, b;
//     cin >> a >> b;
//     a--;
//     b--;

//     G[a].push_back(b);
//     G[b].push_back(a);
//   }

//   int ans = 0;

//   for (int i = 0; i < n; i++) {
//     int cnt = 0;
//     for (int j : G[i]) {
//       if (j < i) {
//         ++cnt;
//       }
//     }
//     if (cnt == 1) {
//       ++ans;
//     }
//   }
//   cout << ans << endl;
// }

int main() {
  int n, m;
  cin >> n >> m;

  int arr[n + 1];
  for (int i = 1; i <= n; i++) {
    arr[i] = 0;
  }

  for (int i = 1; i <= m; i++) {
    int a, b;
    cin >> a >> b;
    arr[max(a, b)]++;
  }

  int ans = 0;
  for (int i = 1; i <= n; i++) {
    if (arr[i] == 1) {
      ans++;
    }
  }

  cout << ans << endl;
}