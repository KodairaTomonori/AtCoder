import numpy

N = int(input())
X = numpy.zeros(N)
Y = numpy.zeros(N)

for i in range(N):
  x, y = map(int, input().strip().split())
  X[i] = x
  Y[i] = y

diff_X = (X[None, :] - X[:, None]) ** 2
diff_Y = (Y[None, :] - Y[:, None]) ** 2

distances = (diff_X + diff_Y) ** .5
print(distances.mean() * N)
