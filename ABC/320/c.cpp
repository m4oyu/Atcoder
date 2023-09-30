#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int m;
    cin >> m;
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    for (int i = 0; i < 10; i++) {
        int time = 0;
        for (int j = 0; j < s1.size(); j++) {
            if (s1[j] == char(i)) {
                time += j + 1;
            }
        }
    }
}