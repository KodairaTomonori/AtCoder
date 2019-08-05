
#include <bits/stdc++.h>
#define rep1(i, n) for (int i=1; i < n + 1; i ++)
using namespace std;


int main() {
  int N;
  cin >> N;
  int cnt = 0;


  rep1(i, N) {
    int p;
    cin >> p;
    if (p != i) {
      cout << p << " " << i << endl;
      cnt += 1;
    }
  }

  if (cnt == 2 || cnt == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
