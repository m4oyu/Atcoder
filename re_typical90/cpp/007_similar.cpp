#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    vector<int> B(N);
    vector<int> C(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> C[i];
    }

    sort(A.begin(), A.end());
    sort(C.begin(), C.end());

    ll ans = 0;

    for (int i = 0; i < N; i++) {
        // B から見つける
        vector<int>::iterator iter_a = lower_bound(A.begin(), A.end(), B[i]);
        ll num_a = distance(A.begin(), iter_a);

        // C から見つける
        vector<int>::iterator iter_c = upper_bound(C.begin(), C.end(), B[i]);
        ll num_c = distance(iter_c, C.end());

        ans += num_a * num_c;
    }

    cout << ans << endl;
}