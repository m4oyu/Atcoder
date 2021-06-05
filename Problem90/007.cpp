#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i< (n) ; ++i)
using ll = long long;

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    sort(a.begin(), a.end());

    int q;
    cin>>q;
    vector<int> b(q);
    for (int i = 0; i < q; i++)
    {
        cin>>b[i];
    }

    for (int i = 0; i < b.size(); i++)
    {
        int left, right;
        left = 0;
        right = n-1;
        while (abs(left-right) > 1)
        {
            int pos = (left + right) /2;
            if(b[i] < a[pos]) right = pos;
            if(b[i] > a[pos]) left= pos;
            if(b[i] == a[pos]) {
                left = pos;
                right = pos;
            }
        }
        int ansl = abs(b[i]-a[left]);
        int ansr = abs(b[i]-a[right]);

        cout << min(ansl, ansr) << endl; 
    }
    return 0;
}