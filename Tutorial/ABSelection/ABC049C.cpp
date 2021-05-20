#include <bits/stdc++.h>
using namespace std;


int main() {
      string s;
      vector<string> vec(4);
      vec = {"maerd", "remaerd", "esare", "resare"};
      cin >> s;
      reverse(s.begin(), s.end());

      for (int i = 0; i < s.size();)
      {
            for (int n = 0; n < 4; n++)
            {
                  if(s.substr(i, vec[n].size()) == vec[n]){
                        i += vec[n].size();
                        break;
                  }
                  if(n == 3) {
                        cout << "NO" << endl;
                        return 0;
                  }
            }
            
      }
      cout << "YES" << endl;
      return 0;
}