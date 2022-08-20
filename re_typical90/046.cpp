#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
    int N;
    cin >> N;

    int A_MOD[46], B_MOD[46], C_MOD[46];
    for (int i = 0; i < 46; i++)
    {
        A_MOD[i] = 0;
        B_MOD[i] = 0;
        C_MOD[i] = 0;
    }

    int tmp;
    for (int i = 0; i < N; i++)
    {
        cin >> tmp;
        A_MOD[tmp % 46]++;
    }
    for (int i = 0; i < N; i++)
    {
        cin >> tmp;
        B_MOD[tmp % 46]++;
    }
    for (int i = 0; i < N; i++)
    {
        cin >> tmp;
        C_MOD[tmp % 46]++;
    }

    // for (int i = 0; i < 46; i++)
    // {
    //     cout << A_MOD[i] << " " << B_MOD[i] << " " << C_MOD[i] << endl;
    // }

    ll count = 0;
    for (int i = 0; i < 46; i++)
    {
        for (int j = 0; j < 46; j++)
        {
            for (int k = 0; k < 46; k++)
            {
                if ((i + j + k) % 46 == 0)
                {
                    count += ll(A_MOD[i]) * B_MOD[j] * C_MOD[k];
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}
