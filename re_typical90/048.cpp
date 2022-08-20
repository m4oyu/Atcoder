#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

// 任意の問題において満点よりも部分点の方がおいしい
// ↑複数の問題間では成り立たない
// 部分点、満点-部分点で配列作って大きい順にとる

int main(int argc, char const *argv[])
{
    int N, K;
    cin >> N >> K;

    int A, B;
    vector<int> v(2 * N, 0);
    for (int i = 0; i < 2 * N; i += 2)
    {
        cin >> A >> B;
        v[i] = B;
        v[i + 1] = A - B;
    }

    sort(v.begin(), v.end(), [](int a, int b)
         { return a > b; });

    ll ans = 0;
    for (int i = 0; i < K; i++)
    {
        ans += v[i];
    }

    cout << ans << endl;
    return 0;
}
