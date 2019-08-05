
#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i < n; i ++)
using namespace std;


int main() {
  int N;
  cin >> N;
  vector<int> A;
  vector<int> B;
  long long  ans = 0;
  rep(i, N + 1) {
    int a; 
    cin >> a;
    A.push_back(a);
  }
  rep(i, N) {
    int b; 
    cin >> b;
    if (A[i] <= b) {
      ans += A[i];
      b -= A[i];
    } else {
      ans += b;
      b = 0;
    }
    if (A[i + 1] <= b) {
      ans += A[i + 1];
      A[i + 1] = 0;
    } else {
      ans += b;
      A[i + 1] -= b;
    }
  }
  cout << ans << endl;
  return 0;
}
