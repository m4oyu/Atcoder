#include <bits/stdc++.h>
using namespace std;

int main() {
      int o = 0, x = 0, q = 0;
      string s;
      cin >> s;
      for (int i = 0; i < 10; i++)
      {
            if (s.at(i) == 'o') {
                  o++;
            } else if (s.at(i) == 'x') {
                  x++;
            } else if (s.at(i) == '?') {
                  q++;
            }
      }
      // cout << "o: " << o << " x: " << x << " ?: " <<  q << endl;
      if (o > 4) {
            cout << 0 << endl;
      } else if (o == 4) {
            cout << 24 << endl;
      } else if (o == 3) {
            int sum = 0;
            sum = sum + 12*3;
            sum = sum + 24*q;
            cout << sum << endl;
      } else if (o == 2) {
            cout << 14 + 2*q*12 + 2*q*4 << endl;
      } else if (o == 1) {
            cout << 1 + q + (q*(q-1)*12 + q*6) + (q*(q-1)*(q-2)*24 + q*(q-1)*2*12 + q*4) << endl; 
      } else {
            cout << 0 << endl;
      }
      
}