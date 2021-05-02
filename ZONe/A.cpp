#include <iostream>

int main() {
      std::string str;
      std::cin >> str;
      int count = 0;
      for (int i = 0; i+3 < 12; i++) {
            if (str.substr(i, 4) == "ZONe")
            {
                  count++;
            }
      }
      std::cout << count;
      return 0;
}