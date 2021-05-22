#include <bits/stdc++.h>
using namespace std;

int main() {
      int n;
      cin >> n;
      map<int, int> a;
      vector<int> b(n);
      map<int, int> bc;
      int ai;


      for (int i = 0; i < n; i++)
      {
            cin >> ai;
            if(a.count(ai)){
                  a[ai] = a.at(ai) + 1;
            } else {
                  a[ai] = 1;
            }
      }
      for (int i = 0; i < n; i++)
      {
            cin>>b[i];
      }
      for (int j = 0; j < n; j++)
      {
            int ci;
            cin>>ci;
            ci--;
            if(bc.count(b[ci])){
                  bc[b[ci]] = bc.at(b[ci]) + 1;
            } else {
                  bc[b[ci]] = 1;
            }
      }


      int64_t count = 0;
      for (auto p : a) {
            auto key = p.first;
            auto value = p.second;
            if(a.count(key)) {
                  if(bc.count(key)) count += value*bc[key];
            }
      }

      
      cout << count << endl;
      return 0;

}