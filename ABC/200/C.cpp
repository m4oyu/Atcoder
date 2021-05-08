#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;


int main() {
      int N, count;
      cin >> N;
      vector<int> A(200000);
      for (int i = 0; i < N; i++) {
            cin >> A[i];
      }

      for (int i = 0; i < N; i++) {
            int up = 0;
            for (int n = i+1; n < N; n++)
            {
                  if (abs(A[i]-A[n]) % 200 == 0){
                        A.erase(A.begin() + n + 1);
                        up++;
                        count += up;
                        N--;
                  }
            }
      }
      cout << count << endl;


      return 0;
}