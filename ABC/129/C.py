# 1 <= N <= 10 ** 5
# 0 <= M <= N − 1
# 1 <= a <= N - 1
N, M = map(int, input().split())

memo = {1: 1, 0: 1}
for i in range(2, int(10**5) + 1):
  memo[i] = memo[i-1] + memo[i-2]


stairs = [False for _ in range(N + 1)]
pattern = 1
prev = 0
for _ in range(M):
  a = int(input())
  sub = a - prev - 1
  if sub == -1:
    print(0)
    break
  pattern *= memo[sub]
  prev = a + 1
else:
  sub = N - prev
  pattern *= memo[sub]
  print(pattern % 1000000007)
