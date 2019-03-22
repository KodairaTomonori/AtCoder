mat = list()
for i in range(4):
  mat.append(input().strip().split(" "))

for row in mat[::-1]:
  print(" ".join(row[::-1]))
