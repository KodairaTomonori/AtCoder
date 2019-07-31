#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i < n; i ++)
#define _min(x, y) x = min(x, y)
#define _max(x, y) x = max(x, y)
using namespace std;


int main() {
  long N, L;
  long aji = 0, tabeta = 500; 
  cin >> N >> L;

  rep(i, N) {
    aji += L;
    if (abs(tabeta) >= abs(L)) tabeta = L;
    L += 1;
  }
  cout << aji - tabeta << endl;
  return 0;
}
