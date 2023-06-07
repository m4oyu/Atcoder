#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class UnionFind {
   public:
    UnionFind() = default;

    explicit UnionFind(size_t n) : m_parentsOrSize(n, -1){};

    int find(int n) {
        if (m_parentsOrSize[n] < 0) {
            return n;
        }
        return (m_parentsOrSize[n] = find(m_parentsOrSize[n]));
    }

    void merge(int a, int b) {
        a = find(a);
        b = find(b);

        if (a != b) {
            if (a < b) {
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
    int n, d;
    cin >> n >> d;

    vector<int> x(n);
    vector<int> y(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    UnionFind uf(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (d >= sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2))) {
                uf.merge(i, j);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << (uf.connected(0, i) ? "Yes" : "No") << endl;
    }
}