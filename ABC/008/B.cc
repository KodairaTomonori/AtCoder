#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;


int main() {
  unordered_map<string, int> name2cnt;
  unordered_map<string, int>::iterator it;
  int N, max_cnt;
  string S, answer;
  cin >> N;

  for (int i=0; i < N; i ++) {
    cin >> S;
    if (name2cnt.find(S) != name2cnt.end()) {
      name2cnt[S] += 1;
    } else {
      name2cnt[S] = 1;
    }
  }
  max_cnt = 0;
  for (it = name2cnt.begin(); it != name2cnt.end(); it ++) {
    if (max_cnt < it->second) {
      max_cnt = it->second;
      answer = it->first;
    }
  }
  cout << answer << endl;

  return 0;
}
