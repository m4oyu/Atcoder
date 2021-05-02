#include <iostream>
#include <iomanip>


int main() {
      double N, D, H;
      std::cin >> N >> D >> H;
      
      double highest = 0;
      double d = 0;
      double h = 0;
      for (int i = 0; i < N; i++)
      {
            std::cin >> d >> h;
            double high = H - (D*(H-h)/(D-d));
            highest = std::max(highest, high);
      }
      std::cout << std::fixed << std::setprecision(15) << highest << std::endl;
      return 0;
}