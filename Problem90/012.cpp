#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 1; i <= (n); ++i)
using ll = long long;

class UnionField {
    public:
        vector<int> par;
        
        void init(int sz) {
            par.resize(sz, -1);
        }
        int root(int pos) {
            if (par[pos] == -1) return pos;
            par[pos] = root(par[pos]);
            return par[pos];
        }
        void unite(int a, int b) {
            a = root(a); b = root(b);
            if (a==b) return;
            par[a] = b;
        }
        bool same(int a, int b) {
            if (root(a) == root(b)) return true;
            return false;
        }
};

int h, w, q;
UnionField UF;
bool use[2005][2005];

void query1(int r, int c) {
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};

    for (int i = 0; i < 4; i++)
    {
        if (use[r+dy[i]][c+dx[i]] == false) continue;
        int hash1 = (r-1) * w + (c-1);
        int hash2 = (r+dy[i]-1) * w + (c+dx[i]-1);
        UF.unite(hash1, hash2);
    }
    use[r][c] = true;
}

bool query2(int ra, int ca, int rb, int cb) {
    if (use[ra][ca] == false || use[rb][cb] == false) return false;
    int hash1 = (ra-1) * w + (ca-1);
    int hash2 = (rb-1) * w + (cb-1);
    if (UF.same(hash1, hash2)) return true;
    return false;
}

int main() {
    cin >> h >> w >> q;

    UF.init(h*w);
    for (int i = 0; i < q; i++)
    {
        int query;
        cin >> query;
        if (query == 1) {
            int r, c;
            cin >> r >> c;
            query1(r, c);
        } else {
            int ra, ca, rb, cb;
            cin >> ra >> ca >> rb >> cb;
            bool ans = query2(ra, ca, rb, cb);
            if (ans) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}