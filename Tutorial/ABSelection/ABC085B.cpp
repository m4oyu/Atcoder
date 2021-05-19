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
      int count = 0;
      int max = 0;
      sort(vec.begin(), vec.end());
      for (int i = 0; i < n; i++)
      {
            if(max < vec[i]){
                  max = vec[i];
                  count++;
            }
      }
      cout << count << endl;
      return 0;
}