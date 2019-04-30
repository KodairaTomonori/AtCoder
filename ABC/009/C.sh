read line
NK=($line)
N=${NK[0]}
K=${NK[1]}

read line
S=(`echo ${line} | grep -o .`)
rest=(`echo ${line} | grep -o . | sort`)
diff=0

declare -A rest_cnt
declare -A dnt_use_cnt
for i in `seq 0 $(($N-1))`
do
  k=${S[i]}
  if [ -v ${rest_cnt[${S[i]}]} ]
  then
    rest_cnt[${k}]=1
  else
    rest_cnt[${k}]=$((rest_cnt[${k}]+1))
  fi
done
for k in "${!rest_cnt[@]}"
do
  dnt_use_cnt[${k}]=${rest_cnt[${k}]}
done


# echo ${line}
for i in `seq 0 $(($N-1))`
do
  # echo
  # echo ----- loop${i}
  # echo rest: ${rest[@]}
  rest_cnt[${S[i]}]=$((rest_cnt[${S[i]}]-1))
  # echo ${!rest_cnt[@]}
  # echo ${rest_cnt[@]}
  # echo
  for j in ${!rest[@]}
  do
    [[ ${rest[j]} == ${S[i]} ]] && flag=0 || flag=1 
    now_diff=$((diff + flag))
    dnt_use_cnt[${rest[j]}]=$((dnt_use_cnt[${rest[j]}]-1))

    match_cnt=0
    for k in "${!dnt_use_cnt[@]}"
    do
      min=$((${dnt_use_cnt[${k}]}<${rest_cnt[${k}]}?${dnt_use_cnt[${k}]}:${rest_cnt[${k}]}))
      match_cnt=$((match_cnt+min))
    done

    # echo ${#rest[@]} $match_cnt
    # echo ${!rest_cnt[@]}
    # echo ${dnt_use_cnt[@]}
    # echo flag:${flag} diff:${diff}
    # echo select: ${rest[j]} next: ${S[i]} now: $((now_diff + ${#rest[@]} - 1 - match_cnt))
    if [ $((now_diff + ${#rest[@]} - 1 - match_cnt)) -le ${K} ]
    then
      diff=$((diff+flag))
      T+=${rest[j]}
      # echo select ${rest[j]}, diff: ${diff}
      unset rest[j]
      # echo ${rest[@]}
      break
    fi
    dnt_use_cnt[${rest[j]}]=$((dnt_use_cnt[${rest[j]}]+1))
  done
  # if [ $i -eq 2 ]; then break; fi
done
# echo ${diff}
echo ${T}
