#include <bits/stdc++.h>
using namespace std;



int main() {
      int n, y;
      cin >> n>>y;
      for (int a = 0; a <= n; a++)
      {
            int nb = n-a;
            for (int b = 0; b <= nb; b++)
            {
                  int nc = nb-b;
                  for (int c = 0; c <= nc; c++)
                  {
                        if(a*10000+b*5000+nc*1000 < y) break;
                        if(a*10000+b*5000+c*1000 == y && a+b+c == n) {
                              cout << a<<" "<<b<<" "<<c<<endl;
                              return 0;
                        }
                  }
                  
            }
            
      }
      cout << "-1 -1 -1" << endl;

      return 0;
}