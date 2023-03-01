#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int Q;
    cin >> Q;
    vector<int> B(Q);
    for (int i = 0; i < Q; i++) {
        cin >> B[i];
    }

    sort(A.begin(), A.end());

    for (int i = 0; i < Q; i++) {
        int left = -1, right = N;

        // A[right] = A のうち B[i] 以上の数字の中で最小のもの
        while (right - left > 1) {
            int mid = left + (right - left) / 2;

            if (A[mid] < B[i]) {
                left = mid;
            }
            if (B[i] <= A[mid]) {
                right = mid;
            }
        }

        if (right == 0) left = 0;
        if (left == N - 1) right = N - 1;

        cout << min(abs(B[i] - A[right]), abs(B[i] - A[left])) << endl;
    }

    return 0;
}
