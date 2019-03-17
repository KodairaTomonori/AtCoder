S = input().strip()
T = input().strip()


at = "@"
atcoder = "atcoder"
for s, t in zip(S, T):
  if not(s == t or ((s == at and t in atcoder) or (t == at and s in atcoder))):
    print("You will lose")
    break
else:
  print("You can win")
