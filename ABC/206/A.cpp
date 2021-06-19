#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int ans = n * 1.08;
    if (ans > 206)
        cout << ":(" << endl;
    if (ans == 206)
        cout << "so-so" << endl;
    if (ans < 206)
        cout << "Yay!" << endl;
    return 0;
}