#include <map>
#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i < n; i ++)
using namespace std;



int main() {
  char s[4];
  map<char,int> counter;
  cin >> s;
  bool flag = true;
  rep(i, 4) {
    counter[s[i]] += 1;
  }
  rep(i, 4) {
    if (counter[s[i]] != 2) flag = false;
  }
  if (flag) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
