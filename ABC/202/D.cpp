#include <bits/stdc++.h>
using namespace std;


int culc(int n) {
      int64_t ret = 1;
      for (int i = 1; i <= n; i++)
      {
            ret *= i;
      }
      return ret;
      
}

int main() {
      int a, b;
      int64_t k;
      cin >> a>>b>>k;
      string s = "";
      int64_t num = culc(a+b)/(culc(a)*culc(b));
      while (num > 0)
      {
            if(k >= num) {
                  s = s+"a";
                  num -= k;
            }
            else {
                  s = s+"b";
            }
      }
      cout << s << endl;
      return 0;      

}