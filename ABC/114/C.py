import itertools
N = int(input().strip())

ns = '753'

def dfs(s):
  cnt = 0
  if int(s) > N:
    return cnt
  cnt += all(c in s for c in ns) 
  cnt += sum(dfs(s + c) for c in ns)
  return cnt


ans = 0
for s in itertools.product('753', repeat=3):
  ans += dfs("".join(s))
print(ans)
