#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(int argc, char const *argv[])
{
    int N, P, Q;
    cin >> N >> P >> Q;

    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    ll product, ans;
    ans = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                for (int l = k + 1; l < N; l++)
                {
                    for (int m = l + 1; m < N; m++)
                    {
                        product = A[i] % P;
                        product = product * A[j] % P;
                        product = product * A[k] % P;
                        product = product * A[l] % P;
                        product = product * A[m] % P;

                        if (product == Q)
                            ans++;
                    }
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}
