#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i< (n) ; ++i)
using ll = long long;

bool check(string s) {
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(') count++;
        else if (s[i] == ')') count--;
        if (count < 0) return false;
    }
    if (count == 0) return true;
    return false;
}

int main() {
    int n;
    cin >> n;
    if (n%2== 1) return 0;

    for (int i = 0; i < (1<<n); i++)
    {
        string ans = "";
        for (int j = n-1; j >= 0; j--)
        {
            if((i & (1<<j)) == 0) ans += "(";
            else ans += ")";
        }
        if (check(ans)) cout << ans << endl;
    }
    return 0;
}