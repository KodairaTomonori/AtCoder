import bisect

A, B, Q = map(int, input().split())
s = [int(input()) for i in range(A)]
t = [int(input()) for i in range(B)]
x = [int(input()) for i in range(Q)]


for i in x: # N
  idx_i = bisect.bisect(s, i) # log A
  z = float('inf')
  for j in s[max(0, idx_i - 1): idx_i + 1]: # 2
    idx_j = bisect.bisect(t, j) # log B

    for k in t[max(0, idx_j - 1): idx_j + 1]: # 2
      _z = min(abs(i - j) + abs(j - k), abs(i - k) + abs(k - j))
      z = min(z, _z)
  print(z)
