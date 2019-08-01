n, k = map(int, input().split())

H = sorted(int(input().strip()) for i in range(n))
min_diff = 10e9 + 5

cumsum = []
for h in H:
  cumsum.append(h)
  if len(cumsum) >= k:
    min_diff = min(min_diff, cumsum[-1] - cumsum[-k])

print(min_diff)
