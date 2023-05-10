#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int h, w, rs, cs, rt, ct;
vector<vector<char>> m(1002, vector<char>(1002, 'n'));
vector<vector<vector<int>>> c(1002, vector<vector<int>>(1002, vector<int>(4, 1000000)));
pair<int, int> vec[4] = {{0, 1}, {-1, 0}, {0, -1}, {1, 0}};
deque<vector<int>> deq;

void solve(int row, int col, int dir, int count) {
    if (c[row][col][dir] < count) {
        return;
    }
   
    for (int i = 0; i < 4; i++)
    {
        c[row][col][i] = count + (dir == i ? 0 : 1);

        int t_row = row+vec[i].first;
        int t_col = col+vec[i].second;
        if (m[t_row][t_col] != '.') {
            continue;
        }

        if (dir == i) {
            if (count < c[row][col][i]) {
                deq.push_front({t_row, t_col, i, count});
            }
        } else {
            if (count+1 < c[row][col][i]) {
                deq.push_back({t_row, t_col, i, count+1});
            }
        }
    }

    return;
}

int main() {
    cin >> h >> w >> rs >> cs >> rt >> ct;
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            cin >> m[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        if (m[rs+vec[i].first][cs+vec[i].second] != '.') {
            continue;
        }
        deq.push_back({rs, cs, i, 0});        
    }

    vector<int> a(4);   
    while(!deq.empty()) {
        a = deq.front();
        deq.pop_front();
        solve(a[0], a[1], a[2], a[3]);
    }
    
    int ans = 1000000;
    for (int i = 0; i < 4; i++)
    {
        ans = min(ans, c[rt][ct][i]);
    }

    cout << ans << endl;

    return 0;
}

    // for (int i = 1; i <= h; i++)
    // {
    //     for (int j = 1; j <= w; j++)
    //     {
    //         if (m[i][j] == '#') {
    //             cout << "#";
    //         } else {
    //             int out = 1000000;
    //             for (int k = 0; k < 4; k++)
    //             {
    //                 out = min(out, c[i][j][k]);
    //             }
    //             cout << out;                
    //         }
    //     }
    //     cout << endl;
        
    // }