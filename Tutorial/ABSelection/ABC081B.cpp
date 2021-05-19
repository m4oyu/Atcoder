#include <bits/stdc++.h>
using namespace std;

int main() {
      int n;
      cin >> n;
      vector<int> vec(n);
      for (int i = 0; i < n; i++)
      {
            cin >> vec.at(i);
      }
      int count = 0;
      while (true)
      {
            for (int i = 0; i < n; i++)
            {
                  if(vec[i]%2 == 1){
                        cout << count << endl;
                        return 0;
                  }
                  vec[i] = vec[i] / 2;
            }
            count++;
      }
      return 0;      
}