#include <bits/stdc++.h>
using namespace std;

int main() {
      int a;
      cin >> a;
      int count =0;
      for (int i = 0; i < 3; i++) {
            if(a%10 == 1) {
                  count++;
            }
            a = a/10;
      }
      cout << count << endl;
      return 0;
}