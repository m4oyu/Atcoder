#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll a, b, c;
    cin >> a >> b >> c;

    // log2(a) < blog2(c)
    // <=> a < c^b
    ll d = 1;

    for (int i = 0; i < b; i++)
    {
        d *= c;
    }

    if (a < d) cout << "Yes" << endl;
    else cout << "No" << endl; 
    
}


// worng

// a = log2(a);
// b = b * log2(c);
// if (a < b) cout << "Yes" << endl;
// else cout << "No" << endl;