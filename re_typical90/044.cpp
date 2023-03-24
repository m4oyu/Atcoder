#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
    int N, Q;
    cin >> N >> Q;
    int A[N + 1];
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
    }

    int T, x, y;
    int count = 0;
    for (int i = 0; i < Q; i++)
    {
        cin >> T >> x >> y;
        if (T == 1)
        {
            x -= count;
            y -= count;
            if (x <= 0)
                x = (x % N) + N;

            if (y <= 0)
                y = (y % N) + N;

            int tmp = A[x];
            A[x] = A[y];
            A[y] = tmp;
        }
        else if (T == 2)
        {
            count++;
        }
        else
        {
            x -= count;
            if (x <= 0)
                x = (x % N) + N;

            cout << A[x] << endl;
        }
    }

    return 0;
}
