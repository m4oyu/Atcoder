#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int n, m;
vector<vector<int>> a(10, vector<int>(10));
vector<vector<bool>> badTerms(11, vector<bool>(10, false));

int solve(vector<bool> remain, int time, int pre_runner, int area)
{
    if (area >= n)
    {
        return time;
    }

    int best_time = 10001;

    for (int i = 0; i < n; i++)
    {
        int score = 10001;

        if (remain[i] == true && badTerms[pre_runner][i] == false)
        {
            // cout << pre_runner << "->" << i << endl;

            vector<bool> new_remain(n);
            new_remain.assign(remain.begin(), remain.end());

            new_remain[i] = false;
            score = solve(new_remain, time + a[i][area], i, area + 1);
        }

        best_time = min(best_time, score);
    }

    return best_time;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> m;

    int x, y;

    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        badTerms[x - 1][y - 1] = true;
        badTerms[y - 1][x - 1] = true;
    }

    vector<bool> remain(n, true);
    int ans = solve(remain, 0, 10, 0);

    if (ans == 10001)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << ans << endl;
    }
}
