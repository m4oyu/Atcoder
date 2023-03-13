// abc190 c

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int N, M;
    cin >> N >> M;
    vector<pair<int, int>> rule(M);
    for (int i = 0; i < M; i++)
    {
        cin >> rule[i].first >> rule[i].second;
    }

    int K;
    cin >> K;
    vector<pair<int, int>> human(K);
    for (int i = 0; i < K; i++)
    {
        cin >> human[i].first >> human[i].second;
    }

    int ans = 0;
    for (int i = 0; i < (1<<K); i++)
    {
        int m[101] = {0};
        for (int j = 0; j < K; j++)
        {
            if ((i & (1 << j)) == 0) {
                m[human[j].first] = 1;
            } else {
                m[human[j].second] = 1;
            }
        }

        int count = 0;
        for (int j = 0; j < M; j++)
        {
            if (m[rule[j].first] == 1 && m[rule[j].second] == 1) count++;
        }
       
        if (ans < count) ans = count;        
    }

    cout << ans << endl;
}