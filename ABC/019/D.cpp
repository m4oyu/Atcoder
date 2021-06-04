#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;


    int dist = 0;
    int maxV = 0;
    int maxI = 0;
    for (int i = 2; i <= n; i++)
    {
        cout << "? " << 1 << " " << i << endl;
        cin>>dist;
        if (maxV < dist) {
            maxV = dist;
            maxI = i;
        }
    }
    
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        cout << "? " << maxI << " " << i << endl;
        cin>>dist;
        if (ans < dist) ans=dist;
    }
    cout << "! " << ans << endl;
    return 0;
}