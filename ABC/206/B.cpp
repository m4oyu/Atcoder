#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int i = 0;
    while (ans < n)
    {
        i++;
        ans += i;
    }
    cout << i << endl;

    return 0;
}