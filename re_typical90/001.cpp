#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
    int N, L, K;
    cin >> N >> L >> K;
    // cout << L << endl;

    int A[N + 1];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    A[N] = L;

    int high = L;
    int low = 0;
    int ans;

    while (true)
    {
        ans = (high + low) / 2 + 1;
        // cout << "high: " << high << ", low: " << low << " ans: " << ans << endl;

        int cnt = 0;
        int length = 0;
        int read = 0;

        // 答えが ans 以上？
        for (int j = 0; j < N + 1; j++)
        {
            length += A[j] - read;
            read = A[j];
            // cout << "   length: " << length << endl;

            if (ans <= length)
            {
                cnt++;
                length = 0;
            }
        }

        if (cnt < K + 1) // ans 未満
            high = ans - 1;
        else // ans 以上
            low = ans;

        if (high == low)
        {
            // cout << "high: " << high << ", low: " << low << " ans: " << ans << endl;
            ans = high;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
