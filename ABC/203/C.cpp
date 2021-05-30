#include <bits/stdc++.h>
using namespace std;

string incr(string s) {
    while
    
}

int main() {
    int n;
    long long k;
    cin >> n>>k;

    string ans = "0";


    vector<unsigned int> moneyPerVillage(1000000000000000005);
    long long ai, bi;
    for (int i = 0; i < n; i++)
    {
        cin >> ai>>bi;
        moneyPerVillage[ai] += bi;    
    }

    long long ans = 0;

    for (unsigned long long i = 0; i < count; i++)
    {
        /* code */
    }
    

    while (k == 0)
    {
        k += moneyPerVillage[ans];
        ans++;
        k--;
    }
    
    cout << ans << endl;
    return 0;
}