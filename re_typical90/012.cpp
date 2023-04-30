#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class UnionFind {
   public:
    explicit UnionFind(size_t n) : m_parentsOrSize(n, -1) {}

    int find(int i) {
        if (m_parentsOrSize[i] < 0) {
            return i;
        }
        return (m_parentsOrSize[i] = find(m_parentsOrSize[i]));
    }

    void merge(int a, int b) {
        a = find(a);
        b = find(b);
        if (a != b) {
            if (-m_parentsOrSize[a] < -m_parentsOrSize[b]) {
                swap(a, b);
            }
            m_parentsOrSize[a] += m_parentsOrSize[b];
            m_parentsOrSize[b] = a;
        }
    }

    bool connected(int a, int b) { return (find(a) == find(b)); }

    int size(int i) { return -m_parentsOrSize[find(i)]; }

   private:
    vector<int> m_parentsOrSize;
};

int main() {
    int h, w, q;
    cin >> h >> w >> q;

    UnionFind uf(h * w);
    vector<bool> red(h * w, false);

    int arr[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

    for (int i = 0; i < q; i++) {
        int query;
        cin >> query;

        if (query == 1) {
            int a, b;
            cin >> a >> b;
            a--;
            b--;
            red[a * w + b] = true;

            for (int j = 0; j < 4; j++) {
                if (a + arr[j][0] < 0 || h <= a + arr[j][0] ||
                    b + arr[j][1] < 0 || w <= b + arr[j][1]) {
                    continue;
                }
                if (red[(a + arr[j][0]) * w + (b + arr[j][1])]) {
                    uf.merge(a * w + b, (a + arr[j][0]) * w + (b + arr[j][1]));
                }
            }
        }
        if (query == 2) {
            int a, b, c, d;
            cin >> a >> b >> c >> d;
            a--;
            b--;
            c--;
            d--;
            if (red[a * w + b] && red[c * w + d] &&
                uf.connected(a * w + b, c * w + d)) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
}
