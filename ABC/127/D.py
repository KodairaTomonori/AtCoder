import collections
N, M = map(int, input().split())
A = collections.Counter(map(int, input().split()))
A = sorted(A.items(), reverse=True)
_N = len(A)

syukei = collections.Counter()
for i in range(M):
  B, C = map(int, input().split())
  syukei[C] += B 

rest = N
goukei = 0

head_idx = 0
max_value, max_value_num = A[head_idx]

for value, card_num in sorted(syukei.items(), reverse=True):
  while max_value >= value and rest > 0 and head_idx < _N:
    if max_value_num <= rest:
      goukei += max_value_num * max_value
    else:
      goukei += rest * max_value

    rest -= max_value_num
    head_idx += 1
    max_value, max_value_num = (A[head_idx] if head_idx < _N else (0, 0))
  if rest <= 0:
    break

  if card_num <= rest:
    goukei += card_num * value
  else:
    goukei += rest * value
  rest -= card_num
  if rest <= 0:
    break
else:
  for value, card_num in A[head_idx:]:
    if card_num <= rest:
      goukei += card_num * value
    else:
      goukei += rest * value
    rest -= card_num
    if rest <= 0:
      break
print(goukei)

