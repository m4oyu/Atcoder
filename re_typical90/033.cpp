#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int h, w;

int main()
{
    cin >> h >> w;

    if (h == 1 || w == 1)
        cout << h * w << endl;
    else
        cout << (h / 2 + h % 2) * (w / 2 + w % 2) << endl;

    return 0;
}
