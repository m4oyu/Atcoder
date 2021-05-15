#include <bits/stdc++.h>
using namespace std;

int main() {
      int n;
      vector<string> s(n);
      vector<int> t(n);
      int first = 0; 
      int second = 0;

      cin >> n;

      for (int i = 1; i < n+1; i++) {
            cin >> s.at(i) >> t[i];
      }

      for (int i = 1; i < n+1; i++) {
            if (t[first] < t[i]) {
                  second = first;
                  first = i;
            } else if (t[second] < t[i]) {
                  second = i;
            }
      }
      cout << s[second] << endl;
      return 0;
}