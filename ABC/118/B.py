N, M = map(int, input().split())

import collections
counter = collections.Counter()
for i in range(N):
  k, *a = map(int, input().split())
  counter.update(a)

print(sum(1 for k, v in counter.items() if v == N))
