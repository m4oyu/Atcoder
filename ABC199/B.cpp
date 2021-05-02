#include <iostream>

int main() {
      int N;
      std::cin >> N;
      int a[100], b[100];
      int amax = 0;
      int bmin = 1000;

      for (int i = 0; i < N; i++) {
            std::cin >> a[i];
            if (a[i] > amax) {
                  amax = a[i];
            }
      }
      for (int i = 0; i < N; i++) {
            std::cin >> b[i];
            if (b[i] < bmin) {
                  bmin = b[i];
            }
      }
      std::cout << std::max(0, bmin - amax + 1);
      return 0;
}
