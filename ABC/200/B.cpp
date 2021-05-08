#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main() {
      unsigned long N;
      int K;
      cin >> N >> K;

      for (int i = 0; i < K; i++)
      {
            if (N % 200 == 0) {
                  N = N / 200;
            } else {
                  string str = to_string(N);
                  str = str + "200";
                  N = stoll(str);
            }
      }
      cout << N << endl;
      return 0;
}