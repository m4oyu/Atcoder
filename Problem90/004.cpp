#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >>h>>w;

    vector<vector<int>> cross(h, vector<int>(w));
    vector<int> xSum(w);
    vector<int> ySum(h);
    int in;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> cross[i][j];
            ySum[i] += cross[i][j];
            xSum[j] += cross[i][j];
        }
    }
    
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (j == w) {
                cout <<  ySum[i]+xSum[j]-cross[i][j];
            }
            cout << ySum[i]+xSum[j]-cross[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}