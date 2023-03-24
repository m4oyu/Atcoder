#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int ANSMOD = pow(10, 9) + 7;

int main()
{
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++)
    {
        int tmp;
        int sum = 0;
        for (int j = 0; j < 6; j++)
        {
            cin >> tmp;
            sum += tmp;
        }
        A[i] = sum;
    }

    ll ans = 1;
    for (int i = 0; i < N; i++)
    {
        ans = (ans * A[i]) % ANSMOD;
    }

    cout << ans << endl;
    return 0;
}
