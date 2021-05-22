#include <bits/stdc++.h>
using namespace std;

int main() {
      stack<string> st;
      vector<string> vec;

      string next;
      int i = 0, t = 1;
      while (true)
      {
            if(/*数*/true) {
                  vec[i] = next;
                  i++;
            }
            if(/*演算子*/true) {
                  // 演算子の表を確認
                  if(/* > の場合*/true) {
                        cout <<st.top()<<" "<<vec[i-2]
                        <<" "<<vec[i-1]<<" T"<<t<< endl;
                        st.pop();
                        vec[i-2] = "T"+t;
                        vec[i-1] = "";
                        i--;
                        t++;
                  }
                  if(/* < の場合*/true) st.push(next);
                  if(/* = の場合*/true) st.pop();
            }
      }
      return 0;
}