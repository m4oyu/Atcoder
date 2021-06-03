#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i< (n) ; ++i)
using ll = long long;

string s;


ll culcInt(int left, int right) {
    ll ret = 0;
    ll num = 1;
    for (int i = right; i >= left; i--)
    {
        ret += (s[i]-'0')*num;
        num *= 10;
    }
    return ret;
}

int main() {
    cin >> s;
    ll ans = 0;
    for (int i = 0; i < (1<<(s.size()-1)); i++)
    {
        ll sum = 0;
        int left = 0;
        int right = 0;
        for (int j = s.size()-2; j >= 0 ; j--)
        {
            if((i & (1<<j)) == 0) {
                right++;
            } else {
                sum += culcInt(left, right);
                left = right+1;
                right = right+1;
            }
        }
        sum += culcInt(left, right);
        ans += sum;
    }
    cout << ans << endl;
    return 0;
}