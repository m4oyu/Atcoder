#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    // 要素を格納するベクトル
    std::vector<int> elements = {1, 2, 3};

    // 順列を生成し、6通りの組み合わせを試行する
    int count = 0;
    do {
        count++;
        std::cout << "試行 " << count << ": ";
        for (int i = 0; i < elements.size(); ++i) {
            std::cout << elements[i] << " ";
        }
        std::cout << std::endl;
    } while (std::next_permutation(elements.begin(), elements.end()) &&
             count < 6);

    return 0;
}
