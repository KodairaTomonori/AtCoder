# A, B, Cを実際の金額に変換
# A, Bの順に一枚づつ取るか取らないかする。
# 取らなかった場合はもうそのコインは使えないので0枚にする。
# A=B=0になったら残りのxをcで払えるか計算する。

A, B, C = int(input()), int(input()), int(input())
X = int(input())
A *= 500
B *= 100
C *= 50

def select_coins(a, b, c, x, count=0):
  if x < 0 or a + b + c < x:
    return 0
  elif (a == 0 and b == 0 and x <= c) or x == 0:
    return 1

  if a > 0:
    count += select_coins(a - 500, b, c, x - 500)
    a = 0
  elif b > 0:
    count += select_coins(a, b - 100, c, x - 100)
    b = 0
  count += select_coins(a, b, c, x)

  return count

print(select_coins(A, B, C, X))
