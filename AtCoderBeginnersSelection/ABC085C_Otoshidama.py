YENS = 10, 5, 1


def check_otoshidama(N, Y, i=0, used=[0], total=0):
  if total > N:
    pass
  elif Y == 0:
    if N == total:
      yield used
  elif i == 2:
    if Y + total == N:
      used[-1] += Y
      yield used
  else:
    sum_used = sum(used)
    for n in range(Y // YENS[i] + 1):
      if sum_used > N:
        break
      yield from check_otoshidama(
        N,
        Y - YENS[i] * n,
        i=i + 1,
        used=used + [0],
        total=total + n
      )
      used [-1] += 1
      sum_used += 1

def check_otoshidama(N, Y):
  for i in range(Y // 10 + 1):
    for j in range(Y // 5 + 1):
      if i + j + (Y - 5 * j) == N:
        return i, j, (Y - 5 * j)
    Y -= 10
  return -1, -1, -1

if __name__ == "__main__":
  N, Y = map(int, input().split())
  Y = Y // 1000
  print(check_otoshidama(N, Y))
