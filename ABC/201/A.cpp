#include <bits/stdc++.h>
using namespace std;

int main(){
      int A[3];
      int tmp;
      cin >> A[0] >> A[1] >> A[2];

      if (A[0] > A[1]){
            tmp = A[0];
            A[0] = A[1];
            A[1] = tmp;
      }
      if (A[1] > A[2]){
            tmp = A[1];
            A[1] = A[2];
            A[2] = tmp;
      }
      if (A[0] > A[1]){
            tmp = A[0];
            A[0] = A[1];
            A[1] = tmp;
      }
      if (A[2] - A[1] == A[1] - A[0]){
            cout << "Yes" << endl;
      } else {
            cout << "No"  <<  endl;
      }

      return 0;
}