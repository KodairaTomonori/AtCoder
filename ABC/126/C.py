import math
N, K = map(int, input().split())

coin_prob = .5

log2 = math.log(2)
logk = math.log(K)
left = logk / log2
def calc(i):
  return max(math.ceil(left - (math.log(i) / log2)), 0)

ans = 0
for i in range(1, N+1):
  n = calc(i)
  ans += coin_prob ** n

print(ans / N)
