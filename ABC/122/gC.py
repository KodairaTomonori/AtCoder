N = 50000
Q = 50000

s = "ACGT"
import random
S = "".join(s[random.randint(0, 3)] for _ in range(N))
print(S)

with open("sample", 'w') as fout:
  fout.write("{} {}\n".format(N, Q))
  fout.write(S + "\n")
  for _ in range(Q):
    l = random.randint(1, N-1)
    r = random.randint(l + 1, N)
    fout.write("{} {}\n".format(l, r))
