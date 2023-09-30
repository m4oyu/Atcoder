#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    vector<vector<string>> ps(3);
    rep(i, 3) {
        ps[i].resize(4);
        for (auto& s : ps[i]) cin >> s;
    }
    return 0;
}