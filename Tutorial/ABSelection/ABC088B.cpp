#include <bits/stdc++.h>
using namespace std;

int main() {
      int n;
      cin >> n;
      vector<int> vec(n);
      for (int i = 0; i < n; i++)
      {
            cin >> vec[i];
      }
      int a = 0, b = 0;
      sort(vec.begin(), vec.end());
      reverse(vec.begin(), vec.end());

      for (int i = 0; i < n; i++)
      {
            if(i%2 == 0) a+=vec[i];
            else b+=vec[i];
      }
      cout << a-b << endl;
      return 0;
}