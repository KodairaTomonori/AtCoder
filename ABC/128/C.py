import collections
N, M = map(int, input().split())

K, S_list = list(), list()
for i in range(M):
  k, *S = map(int, input().split())
  # K.append(K)
  S_list.append(set(S))
P = list(map(int, input().split()))


def search(N, status=set()):
  if N == 0:
    yield status
  else:
    yield from search(N-1, status=status | {N})
    yield from search(N-1, status=status)


ans = 0
for status in search(N):
  for p, S in zip(P, S_list):
    if len(S & status) % 2 != p:
      break
  else:
    ans += 1
print(ans)


