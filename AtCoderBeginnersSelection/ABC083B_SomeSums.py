import itertools


to_int = lambda x: x[0] * 1000 + x[1] * 100 + x[2] * 10 + x[3]

def get_patterns(lt, gt, prev=9, nums=[], accum_sum=0, rest=4):
  if gt < accum_sum: 
    return

  if rest == 0:
    if lt <= accum_sum <= gt:
      yield nums
  else:
    for i in range(prev, -1, -1):
      yield from get_patterns(
        lt,
        gt,
        prev=i,
        nums=nums + [i],
        accum_sum=accum_sum + i,
        rest=rest - 1
      )


def check_permutation(N, pat, cnt=0):
  mem = set()
  for p in itertools.permutations(pat):
    if p in mem:
      continue
    p_int = to_int(p)
    if N >= p_int:
      cnt += p_int
    mem.add(p)
  return cnt


if __name__ == "__main__":
  N, A, B = map(int, input().split())

  ans = 0
  if N == 10000:
    N = 9999
    if A <= 1 <= B:
      ans += 10000

  digits = []
  tmp = N
  for i in range(4):
    tmp, mod = divmod(tmp, 10)
    digits.append(mod)
  digits = digits[::-1]
  for pat in get_patterns(A, B):
    ans += check_permutation(N, pat)
  print(ans)
