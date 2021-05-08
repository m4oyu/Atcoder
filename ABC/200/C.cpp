#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;


int main() {
      int N, A[200005];
      long long B[200];
      cin >> N;
      for (int i = 0; i < N; i++) {
            cin >> A[i];
            B[A[i]%200]++;
      }
      long long res = 0;
      for (int i = 0; i < 200; i++) {
            res += (B[i]*(B[i]-1))/2;
      }
      cout << res << endl;

      return 0;
}