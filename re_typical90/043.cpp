#include <bits/stdc++.h>
using namespace std;
using ll = long long;
    
vector<vector<char>> m(1001, vector<char>(1001, 'n'));
vector<vector<vector<int>>> c(1001, vector<vector<int>>(1001, vector<int>(4, -1)));
pair<int, int> vec[4] = {{0, 1}, {-1, 0}, {0, -1}, {1, 0}};

void solve(int row, int col, int dir) {
    if (m[row][col] == 'n') {
        return;
    } 

    for (int i = 0; i < 4; i++)
    {
        if (c[row][col][i] == -1) {
            
        }
    }
        
    
   
}


int main() {
    int h, w, rs, cs, rt, ct;
    cin >> h >> w >> rs >> cs >> rt >> ct;
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            cin >> m[i][j];
        }
    }
    




    return 0;
}