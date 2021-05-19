#include <bits/stdc++.h>
using namespace std;

int main() {
      int n, a, b;
      cin >>n>>a>>b;
      int sum = 0;
      if(n == 10000 && a == 1) sum += 10000;
      for (int th = 0; th < 10; th++)
      {
            for (int hu = 0; hu < 10; hu++)
            {
                  for (int te = 0; te < 10; te++)
                  {
                        for (int one = 0; one < 10; one++)
                        {
                              int num = th*1000 + hu*100 + te*10 + one;
                              if(n < num) break;
                              int result = th + hu + te + one;
                              if(a <= result && result <= b) sum += num;
                        }
                        
                  }
                  
            }
            
      }
      cout << sum << endl;
      return 0;
}
