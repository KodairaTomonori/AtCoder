import random
N = 50

fout = open("sample", 'w')
fout.write(str(N))
tmp = [1]
for i in range(2, N + 1):
  j = random.randint(1, i)
  tmp.insert(j - 1, j)
print(len(tmp))
fout.write(" ".join(map(str, tmp)))
