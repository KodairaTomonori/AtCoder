N = int(input())
SPs = list()
memo = dict()
for i in range(N):
  S, P = input().split()
  SP = (S, -int(P))
  SPs.append(SP)
  memo[SP] = i

for sp in sorted(SPs):
  print(memo[sp] + 1)
