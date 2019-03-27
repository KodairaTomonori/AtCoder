N = int(input())

DENOM = 10 ** 9 + 7

memo = [{} for i in range(N + 1)]

BASE = "ACGT"
AGC = "AGC"


def check(last4):
  for i in range(4):
    tmp = list(last4)
    if i >= 1:
      tmp[i-1], tmp[i] = tmp[i], tmp[i-1]
    if AGC in "".join(tmp):
      return False
  return True


def dfs(cur, last3):
  ret = 0
  if last3 in memo[cur]:
    return memo[cur][last3]
  if cur == N:
    return 1
  for c in BASE:
    if check(last3 + c):
      ret = (ret + dfs(cur + 1, last3[1:] + c)) % DENOM

  memo[cur][last3] = ret
  return ret

print(dfs(0, "TTT"))
