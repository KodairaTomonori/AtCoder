import sys
sys.setrecursionlimit(100000)

N, K = map(int, input().split())
V = list(map(int, input().split())) # N


ans = 0
for i in range(K+1):
  hand = V[:i]
  for j in range(K-i+1):
    if j != 0:
      x = hand + V[max(N-j, i):]
    else:
      x = hand
    rest = K - i - j
    summ = sum(v for i, v in enumerate(sorted(x)) if i >= rest or v > 0)
    ans = max(ans, summ)
    print(f"K={K}, i={i}, j={j}, rest={rest}, sum={summ}, x={x}")
print(ans)

