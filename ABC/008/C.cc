#include <algorithm>
#include <functional>
#include <iostream>
#include <iomanip>

using namespace std;

void qsort(int *cards, int n) {
  int tmp;
  for (int i=0; i < n-1; i ++) {
    for (int j=i+1; j < n; j ++) {
      if (cards[i] > cards[j]) {
        tmp = cards[i];
        cards[i] = cards[j];
        cards[j] = tmp;
      }
    }
  }
}


double foreach_permutation(int *cards, int n) {
  int ans = 0;
  int i, j;
  int total_score = 0;
  int num = 0;
  qsort(cards, n);
  do {
    total_score ++;
    for (i=1; i < n; i ++) {
      bool side = true;
      for (j=0; j < i; j ++) {
        if (cards[i] % cards[j] == 0) {
          side = !side;
        }
      }
      if (side) total_score ++;
    }
    num += 1;
  } while (std::next_permutation(cards, cards + n));
  return double(total_score) / double(num);
}

int main() {
  int N;
  int C[100];

  cin >> N;
  for (int i = 0; i < N; i ++) cin >> C[i];

  cout << setprecision(9) << foreach_permutation(C, N) << endl;
  return 0;
}
