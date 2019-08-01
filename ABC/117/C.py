import bisect
import math
N, M = map(int, input().split())
X = sorted(map(int, input().split()))

diffs = sorted([a - b for a, b in zip(X[1:], X[:])], reverse=True)
ans = sum(diffs[(N-1):])
print(ans)
