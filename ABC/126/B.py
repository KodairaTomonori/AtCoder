
def check(i):
  i = int(i)
  if 12 < i or i == 0:
    return "YY"
  else:
    return "MM"


S = input().strip()
l, r = map(check, (S[:2], S[2:]))

if l == r:
  if l == "MM":
    print("AMBIGUOUS")
  else:
    print("NA")
else:
  print(l + r)
