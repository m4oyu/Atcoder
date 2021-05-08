#include <iostream>
#include <stack>
#include <ctype.h>
#include <sstream>
#include <stdexcept>

using namespace std;

stack<int> st;

int stPop(){
      int ret;
      if (st.size() == 0) {
            throw invalid_argument("invalid");
      }
      ret = st.top();
      st.pop();
      return ret;
}

int culculate(string str) {
      try
      {
            int a, b, c;
            a = stPop();
            if (str == "+"){
                  b = stPop();
                  return a+b;
            } else if (str == "-") {
                  b = stPop();
                  return b-a;
            } else if (str == "*") {
                  b = stPop();
                  return a*b;
            } else if (str == "++") {
                  return a + 1;
            } else if (str == "@") {
                  b = stPop();
                  c = stPop();
                  return a*b + b*c + c*a;
            }
      }
      catch(invalid_argument& e)
      {
            throw;
      }
      return 0;
}

bool isNum (const string& str) {
      for (char const &c : str) {
            if  (isdigit(c) == 0) {
                  return false;
            }
      }
      return true;
}

int main() {

      try {
            string line, str;
            std::getline(cin, line);
            std::stringstream ss{line};

            while (std::getline(ss, str, ' ')) {  
                  if (isNum(str))
                  {
                        st.push(stoi(str));
                  } else {
                        int result = culculate(str);
                        st.push(result);
                  }
            }
            cout << st.top() << endl;
      }
      catch(invalid_argument& e) {
            cout << e.what() << endl;
      }
      return 0;
}
