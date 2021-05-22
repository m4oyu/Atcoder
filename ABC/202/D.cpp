#include <bits/stdc++.h>
using namespace std;

int main()
{
      int a, b;
      long long k;
      cin >> a >> b >> k;
      string s = "";
      long long num;
      vector<vector<long long>> dp(a + 1, vector<long long>(b + 1));
      dp[0][0] = 1;
      for (int i = 0; i <= a; ++i)
      {
            for (int j = 0; j <= b; ++j)
            {
                  if (i > 0)
                  {
                        dp[i][j] += dp[i - 1][j];
                  }
                  if (j > 0)
                  {
                        dp[i][j] += dp[i][j - 1];
                  }
            }
      }
      while (a + b > 0)
      {
            num = dp[a-1][b];
            if (a == 0)
            {
                  s = s + "b";
                  b--;
            }
            else if (b == 0)
            {
                  s = s + "a";
                  a--;
            }
            else if (k <= num)
            {
                  s = s + "a";
                  a--;
            }
            else
            {
                  s = s + "b";
                  k -= num;
                  b--;
            }
      }
      cout << s << endl;
      return 0;
}