N, M = map(int, input().split())
islands = {i + 1: 1 for i in range(N)}
ab_list = [map(int, input().split()) for i in range(M)]

ans = list()
k2k = dict()
start = N*(N - 1) / 2


def recursive_dict(x):
  if not x in k2k: return x
  prev = k2k[x]
  while True:
    if prev in k2k:
      prev = k2k[prev]
    else:
      k2k[x] = prev
      return prev

for a, b in ab_list[::-1]:
  a, b = recursive_dict(a), recursive_dict(b)
  if a == b:
    ans.append(0)
    continue
  ans.append(islands[a] * islands[b])
  islands[a] += islands[b]
  k2k[b] = a

cumsum = 0
for i in ans[::-1]:
  cumsum += i
  print(cumsum)
