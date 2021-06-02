#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i< (n) ; ++i)
using ll = long long;


int main() {
    int n, l, k;
    cin >> n>>l>>k;
    
    vector<int> a(n+2);
    a[0] = 0;
    a[n+1] = l;
    for (int i = 1; i < n+2; i++)
    {
        cin >> a[i]; 
    }
    

    int max = l/2;
    int min = 1;

    int ans;
    while (max != min)
    {
        ans = (max+min)/2+1;
        int sum = 0;
        int count = 0;
        int start = 0;
        for (int i = 0; i < n+2; i++)
        {
            if (ans <= a[i] - a[start]){
                start = i;
                count++;
            } 
        }
        if (count < k+1) {
            ans--;
            max = ans;
        } else {
            min = ans;
        }
    }
    cout << ans << endl;
    return 0;
}