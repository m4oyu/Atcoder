#include <iostream>
#include <cmath>

int main(void) {
      int a, b, c;
      std::cin >> a >> b >> c;

      if (std::pow(a, 2.0) + std::pow(b, 2.0) < std::pow(c, 2.0)){
            std::cout << "Yes";
      } else {
            std::cout << "No";
      }
      return 0;
}