#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i< (n) ; ++i)
using ll = long long;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (c%2 == 0) {
        if (abs(a) > abs(b)) cout << ">" << endl;
        if (abs(a) < abs(b)) cout << "<" << endl;
        if (abs(a) == abs(b)) cout << "=" << endl;
    } else {
        if (a < 0 && b < 0) {
            if (abs(a) > abs(b)) cout << "<" << endl;
            if (abs(a) < abs(b)) cout << ">" << endl;
            if (abs(a) == abs(b)) cout << "=" << endl;
        }
        else if (a < 0) {
            cout << "<" << endl;
        }
        else if (b < 0) {
            cout << ">" << endl;
        }
        else {
            if (abs(a) > abs(b)) cout << ">" << endl;
            if (abs(a) < abs(b)) cout << "<" << endl;
            if (abs(a) == abs(b)) cout << "=" << endl;
        }

    }    
    return 0;
}