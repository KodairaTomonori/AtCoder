read N

max_n1=0
max_n2=0
for i in `seq 0 $((N - 1))`
do
  read A;
  if [ ${max_n1} -lt ${A} ]
  then
    max_n2=${max_n1}
    max_n1=${A}
  elif [ ${max_n2} -lt ${A} -a ${max_n1} -ne ${A} ]
  then
    max_n2=${A}
  fi
done
echo ${max_n2}
