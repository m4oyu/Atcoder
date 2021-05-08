#include <iostream>

int main() {
      int N;
      std::cin >> N;

      int a = N / 100;
      int b = N % 100;
      if (b > 0) {
            a++;
      }
      std::cout << a << std::endl;
      return 0;
}