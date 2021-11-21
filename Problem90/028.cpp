#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

map<ll, int> m;

void carry(int n)
{
    m[n] = 0;
    m[n + 1]++;
    if (m[n + 1] == 2)
        carry(n + 1);
    return;
}

int solution(vector<int> &A)
{
    // write your code in C++14 (g++ 6.2.0)
    for (int i = 0; i < A.size(); i++)
    {
        if (!m.count(A[i]))
            m[A[i]]++;
        else if (m[A[i]] == 0)
        {
            m[A[i]] = 1;
        }
        else
        {
            carry(A[i]);
        }
    }
    int ans = 0;
    for (auto itr = m.begin(); itr != m.end(); ++itr)
    {
        if (itr->second == 1)
            ans++;
    }
    return ans;
}

int main()
{
    vector<int> vec;
    vec = {1, 0, 2, 0, 0, 2};
    int ans = solution(vec);
    cout << ans << endl;
}