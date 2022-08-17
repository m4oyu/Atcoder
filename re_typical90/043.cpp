#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int dir[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
int dist[1009][1009][4];
char maze[1009][1009];

struct state
{
    int r, c, d;
};

int main()
{
    int h, w;
    int rs, cs, rt, ct;
    cin >> h >> w;
    cin >> rs >> cs;
    cin >> rt >> ct;

    rs--;
    cs--;
    rt--;
    ct--;

    for (int i = 0; i < h; i++)
    {
        cin >> maze[i];
    }

    for (int i = 0; i < h; ++i)
    {
        for (int j = 0; j < w; ++j)
        {
            dist[i][j][0] = INT_MAX;
            dist[i][j][1] = INT_MAX;
            dist[i][j][2] = INT_MAX;
            dist[i][j][3] = INT_MAX;
        }
    }

    queue<state> q;
    for (int i = 0; i < 4; i++)
    {
        dist[rs][cs][i] = 0;
        q.push({rs, cs, i});
    }

    while (!q.empty())
    {
        state s = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int next_r = s.r + dir[i][0], next_c = s.c + dir[i][1];
            if (next_r < 0 || h <= next_r || next_c < 0 || w <= next_c || maze[next_r][next_c] == '#')
            {
                continue;
            }

            if (dist[s.r][s.c][s.d] >= dist[next_r][next_c][i])
            {
                continue;
            }

            if (s.d == i)
            {
                dist[next_r][next_c][i] = dist[s.r][s.c][s.d];
                q.push({next_r, next_c, i});
            }
            else
            {
                dist[next_r][next_c][i] = dist[s.r][s.c][s.d] + 1;
                q.push({next_r, next_c, i});
            }
        }
    }

    int answer = INT_MAX;
    for (int i = 0; i < 4; ++i)
    {
        answer = min(answer, dist[rt][ct][i]);
    }
    cout << answer << endl;
    return 0;
}
