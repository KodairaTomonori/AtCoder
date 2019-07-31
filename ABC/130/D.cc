#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
  int N;
  long long A[100000];
  long long K, ans;
  vector<long long> cumsum_A;
  long long cumsum = 0;
  cin >> N >> K;
  for (int i=0; i < N; i ++) {
    cin >> A[i];
    cumsum += A[i];
    cumsum_A.push_back(cumsum);
  }
  for (int i=0; i < N; i ++) {
    auto idx = lower_bound(cumsum_A.begin(), cumsum_A.end(), K);
    ans += cumsum_A.end() - idx;
    K += A[i];
  }
  cout << ans << endl;
  return 0;
}
