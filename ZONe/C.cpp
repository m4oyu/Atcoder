#include <iostream>

int main() {
      int N;
      std::cin >> N;
      int team[N][5];
      for (int i = 0; i < N; i++)
      {
            std::cin >> team[i][0 ]>> team[i][1] >> team[i][2] >> team[i][3] >> team[i][4];
      }
            
      int maxPow = 0; 

      for (int a = 0; a < N-2; a++) {
            for (int b = 1; b < N-1; b++)
            {
                  for (int c= 2; c < N; c++)
                  {
                        // team 総合力
                        int teamPow = 1000000000;

                        for (int i = 0; i < 5; i++)
                        {
                              int pow = std::max(team[a][i], team[b][i]);
                              pow = std::max(pow, team[c][i]);
                              teamPow = std::min(pow, teamPow);
                        }
                        
                        maxPow = std::max(teamPow, maxPow);
                  }                  
            }
      }
      std::cout << maxPow;
      return 0;
}