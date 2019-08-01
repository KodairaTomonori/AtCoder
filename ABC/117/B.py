N = int(input())
L = list(map(int, input().split()))

mlen = max(L)
slen = sum(L)

if (slen - mlen) <= mlen:
  print("No")
else:
  print("Yes")
