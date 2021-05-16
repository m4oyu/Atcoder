#include <bits/stdc++.h>
using namespace std;

int main() {
      int r=0, x=0, y=0;
      cin >> r >> x >> y;
      double c = sqrt(pow(x,2) + pow(y, 2));
      int a = trunc(c);
      if (c != a) {
            a++;
      }
      if (a < r) {
            cout << 2 << endl;
            return 0;
      }
      int64_t b = a/r;
      if (a%r != 0) {
            b++;
      }
      cout << b << endl;
      return 0;
}