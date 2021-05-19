#include <bits/stdc++.h>
using namespace std;

int main() {
      int a, b, c;
      cin >> a>>b>>c;
      int x;
      cin >> x;
      int count = 0;
      for (int i = 0; i <= a; i++)
      {
            for (int n = 0; n <= b; n++)
            {
                  int sum = x - 500*i - 100*n;
                  if (0 <= sum && sum <= c*50 && x%50 == 0) count++;
            }
      }
      cout << count << endl;
      return 0;
}