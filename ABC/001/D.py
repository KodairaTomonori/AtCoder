rain_terms = [
  False
  for _ in range(12)
  for _ in range(24)
] + [False]

N = int(input())
for _ in range(N):
  S, E = input().split("-")
  Sh, Sm = int(S[:2]), int(S[2:])
  Eh, Em = int(E[:2]), int(E[2:])
  Sh = int(Sh) * 12
  Sm = int(Sm / 5)

  Eh = int(Eh) * 12
  Em = int((Em + 4) / 5)
  for i in range(Sh+Sm, Eh+Em):
    rain_terms[i] = True


s = ""
e = ""
is_rained = False
for i, is_rain in enumerate(rain_terms):
  if is_rained and not is_rain: 
    h, m = divmod(i, 12)
    e = "{:02d}{:02d}".format(h, m * 5)
    is_rained = False
    print("{}-{}".format(s, e))

  elif not is_rained and is_rain: 
    h, m = divmod(i, 12)
    s = "{:02d}{:02d}".format(h, m * 5)
    is_rained = True
