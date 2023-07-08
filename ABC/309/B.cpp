#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;

    vector<string> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    int tmp = a[0][0];

    for (int i = 0; i < n-1; i++)
    {
        a[i][0] = a[i+1][0];
    }
    for (int i = 0; i < n-1; i++)
    {
        a[n-1][i] = a[n-1][i+1];
    }
    for (int i = n-1; i > 0; i--)
    {
        a[i][n-1] = a[i-1][n-1];
    }
    for (int i = n-1; i > 0; i--)
    {
        a[0][i] = a[0][i-1];
    }

    a[0][1] = tmp;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
}