#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 1; i <= (n); ++i)
using ll = long long;

int main() {
    int n;
    cin >> n;
    ll score[n+1][2];
    memset(score, 0, sizeof(score));
    rep(i, n) {
        ll a, b;
        cin >> a >> b;
        if (a == 1) {
            score[i][0] = score[i-1][0] + b;
            score[i][1] = score[i-1][1];
        } else {
            score[i][0] = score[i-1][0];
            score[i][1] = score[i-1][1] + b;
        }
    }
    int q;
    cin >> q;

    vector<pair<int, int>> ask(q+1);
    rep(i, q) cin >> ask[i].first >> ask[i].second;

    for (int i = 1; i <= q; i++)
    {
        int left = ask[i].first;
        int right = ask[i].second;

        ll class1 = score[right][0] - score[left-1][0];
        ll class2 = score[right][1] - score[left-1][1];
        
        cout << class1 << " " << class2 << endl;
                
    }
    

    return 0;
}