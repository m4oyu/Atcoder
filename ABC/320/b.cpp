#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;

    int ans = 1;

    for (int i = 0; i < s.size(); i++) {
        for (int j = 1; i + j <= s.size(); j++) {
            string check = s.substr(i, j);

            int left = 0;
            int right = check.size() - 1;
            bool isPalindrome = true;

            while (left < right) {
                if (check[left] != check[right]) {
                    isPalindrome = false;
                    break;
                }
                left++;
                right--;
            }

            if (isPalindrome) {
                ans = max(ans, int(check.size()));
            }
        }
    }

    cout << ans << endl;
    return 0;
}