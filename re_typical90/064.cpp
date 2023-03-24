#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll ans = 0;
    int N, Q;
    cin >> N >> Q;

    ll A[N] = {0}, B[N+1] = {0};
    cin >> A[0];
    for (int i = 1; i < N; i++)
    {
        cin >> A[i];
        B[i] = A[i]-A[i-1];
        ans += abs(B[i]);
    }

    for (int i = 0; i < Q; i++)
    {
        int L, R;
        ll V, front = 0, back = 0;
        cin >> L >> R >> V;

        if (L != 1) front = abs(B[L-1] + V) - abs(B[L-1]);
        if (R != N) back = abs(B[R] - V) - abs(B[R]);
        B[L-1] = B[L-1] + V;
        B[R] = B[R] - V;

        ans += front + back;          
        cout << ans << endl; 
    }
}