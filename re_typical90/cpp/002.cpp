#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < (1 << N); i++)
    {
        string Candidate = "";
        for (int j = N-1; j >= 0; j--)
        {
            if ((i & (1<<j)) == 0) Candidate += "(";
            else Candidate += ")";
        }

        int left = 0;
        int right = 0;
        bool isOk = true;
        for (int i = 0; i < N; i++)
        {
            if (Candidate.at(i) == '(') {
                left++;
            } else {
                right++;
            }
            if (left < right) {
                isOk = false;
                break;
            }
        }
        if (left != right) isOk = false;

        if (isOk) cout << Candidate << endl;
    }   
}