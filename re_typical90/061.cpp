#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

const int QMax = 100000;
const int QDebug = 10;

int Q;
int t[QMax], x[QMax], ql[QMax], qr[QMax];

int main()
{
    cin >> Q;

    for (int i = 0; i < Q; i++)
    {
        cin >> t[i] >> x[i];
    }

    int left = 0, right = 0;

    for (int i = 0; i < Q; i++)
    {
        if (t[i] == 1)
        {
            ql[left] = x[i];
            left++;
        }
        if (t[i] == 2)
        {
            qr[right] = x[i];
            right++;
        }
        if (t[i] == 3)
        {
            if (x[i] <= left)
            {
                cout << ql[left - x[i]] << endl;
            }
            else if (left < x[i])
            {
                cout << qr[x[i] - left - 1] << endl;
            }
        }
    }

    return 0;
}
