#include <bits/stdc++.h>
#include <math.h>
#define rep(i, n) for (int i=0; i < n; i ++)
#define rep1(i, n) for (int i=1; i <= n; i ++)
#define _min(x, y) x = min(x, y)
#define _max(x, y) x = max(x, y)
using namespace std;


int main() {
  int N, A, B;
  cin >> N >> A >> B;
  cout << min(N * A, B) << endl;
}
