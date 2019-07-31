#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i < n; i ++)
using namespace std;


int main() {
  int N;
  int first = 0, second = 0;
  vector<int> A(200003, 0);
  cin >> N;
  rep (i, N) {
    cin >> A[i];
    if (first < A[i]) {
      second = first;
      first = A[i];
    } else if (second < A[i]) {
      second = A[i];
    }
  }
  rep (i, N) {
    cout << (A[i] == first ? second : first) << endl;
  }

  return 0;
}
