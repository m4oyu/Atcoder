#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

ll base8_to_ll(string n) {
  ll s = n.size(), ret = 0, x = 1;
  for (int i = s - 1; i >= 0; i--) {
    ret += 1ll * (n[i] - '0') * x;
    x *= 8ll;
  }
  return ret;
}

string ll_to_base9(ll n) {
  if (n == 0) {
    return "0";
  }

  string ret = "";
  while (n > 0) {
    char a = n % 9 + '0';
    n /= 9;
    ret = a + ret;
  }
  return ret;
}

string replace_8to5(string n) {
  string ans = n;
  for (int i = 0; i < n.size(); i++) {
    if (ans[i] == '8') {
      ans[i] = '5';
    }
  }
  return ans;
}

int main() {
  string n;
  int k;
  cin >> n >> k;

  for (int i = 0; i < k; i++) {
    ll base10 = base8_to_ll(n);
    string base9 = ll_to_base9(base10);
    n = replace_8to5(base9);
  }

  cout << n << endl;
  return 0;
}
