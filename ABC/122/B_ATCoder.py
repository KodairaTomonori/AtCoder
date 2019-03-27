base_chars = set("ACGT")
 
max_len = 0
tmp_len = 0
for c in input().strip():
  if c in base_chars:
    tmp_len += 1
  else:
    max_len = max(max_len, tmp_len)
    tmp_len = 0
max_len = max(max_len, tmp_len)
print(max_len)
