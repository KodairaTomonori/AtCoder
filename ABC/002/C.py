xa, ya, xb, yb, xc, yc = map(int, input().split())
xb, xc = map(lambda x: x - xa, [xb, xc])
yb, yc = map(lambda y: y - ya, [yb, yc])

print(abs(xb * yc - yb * xc) / 2)
