N, A, B, C = map(int, input().split())
ls = [int(input()) for i in range(N)]


def select(next_idx, a=0, b=0, c=0, point=0):
  if next_idx == N:
    if a and b and c:
      tmp = abs(A - a) + abs(B - b) + abs(C - c)
      yield abs(A - a) + abs(B - b) + abs(C - c) + point - 30
  else:
    length = ls[next_idx]
    flag = length > 10
    next_idx += 1

    yield from select(next_idx, a=a, b=b, c=c, point=point)
    point += 10
    if a == 0 or flag: 
      yield from select(next_idx, a=a + length, b=b, c=c, point=point)
    if b == 0 or flag: 
      yield from select(next_idx, a=a, b=b + length, c=c, point=point)
    if c == 0 or flag: 
      yield from select(next_idx, a=a, b=b, c=c + length, point=point)



print(min(select(0)))
