import math

def combination(N, X, Y):
  return math.factorial(N) // (math.factorial(X) * math.factorial(Y))


R, C = map(int, input().split())
X, Y = map(int, input().split())
D, L = map(int, input().split())

area_pattern = (R - X + 1) * (C - Y + 1)
area = X * Y
location_pattern = combination(area, D, L)
pattern = int((area_pattern * location_pattern))

denom = int(10**9 + 7)
mod = pattern % denom

print(mod)
