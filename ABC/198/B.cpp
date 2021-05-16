#include <bits/stdc++.h>
using namespace std;

int main() {
      int n = 0;
      cin >> n;
      vector<int> vec(10);
      if (n == 0) {
            cout << "Yes" << endl;
            return 0;
      }
      int a = 0;
      while (true)
      {
            if (n%10 != 0){
                  break;
            }
            n = n/10;
      }
      
      for (int i = 0; n != 0; i++) {
            vec.at(i) = n%10;
            n = n/10;
            a++;
      }
      for (int i = 0; i < a/2; i++)
      {
            if (vec.at(i) != vec.at(a-i-1)) {
                  cout << "No" << endl;
                  return 0;
            }
            
      }
      cout << "Yes" << endl;
      return 0;
}