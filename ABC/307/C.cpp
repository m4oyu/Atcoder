#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {

    // a, b, x
    // x と a が重なり合うパターン -> A
    // 同上、b -> B
    // A * B で使用されていない x の点がなければ答え

    int ha, wa, hb, wb, hx, wx;
    vector<string> a(10), b(10), x(10);

    cin >> ha >> wa;
    for (int i = 0; i < ha; i++)
    {
        cin >> a[i];
    }
    cin >> hb >> ha ;
    for (int i = 0; i < hb; i++)
    {
        cin >> b[i];
    }
    cin >> hx >> wx;
    for (int i = 0; i < hx; i++)
    {
        cin >> x[i];
    }
    
    
    

    




}