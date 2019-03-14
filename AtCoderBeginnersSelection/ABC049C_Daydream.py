inv_S = input().strip()[::-1]
words = "dream", "dreamer", "erase", "eraser"
inv_words = [w[::-1] for w in words]

r = "r"
m = "m"
flag = "YES"
while inv_S:
  i = 5
  if inv_S[0] == r:
    i += 1
    if inv_S[2] == m:
      i += 1
  if inv_S[:i] not in inv_words:
    flag = "NO"
    break
  inv_S = inv_S[i:]

print(flag)
