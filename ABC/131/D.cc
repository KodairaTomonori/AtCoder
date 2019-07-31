#include <bits/stdc++.h>
#include <unordered_map>
#define rep(i, n) for (int i=0; i < n; i ++)
#define _min(x, y) x = min(x, y)
#define _max(x, y) x = max(x, y)
using namespace std;


int main() {
  long N;
  unordered_map<long, long> dest2time;
  long long cumsum = 0;
  vector<long> keys;
  int flag=0;

  cin >> N;
  rep(i, N) {
    long long A, B;
    cin >> A >> B;
    if (dest2time.find(B) == dest2time.end()) {
      dest2time[B] = 0;
      keys.push_back(B);
    }
    dest2time[B] += A;
  }

  sort(keys.begin(), keys.end());

  for (long i: keys) {
    cumsum += dest2time[i];
    if (cumsum > i) flag = 1;
  }
  cout << (flag == 1 ? "No" : "Yes") << endl;
  return 0;
}
