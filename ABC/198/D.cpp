#include <bits/stdc++.h>
using namespace std;

bool fn(int f) {
      
}

int main()
{
      string s, t, r;
      cin >> s >> t >> r;
      map<char, int> m;

      for (int i = 0; i < s.size(); i++)
      {
            m[s.at(i)] = 0;
      }
      for (int i = 0; i < t.size(); i++)
      {
            m[t.at(i)] = 0;
      }
      for (int i = 0; i < r.size(); i++)
      {
            m[r.at(i)] = 0;
      }
      if (m.size() > 10)
      {
            cout << "UNSOLVABLE" << endl;
            return 0;
      }
      if (fn(0)) {
            
      }
      

}