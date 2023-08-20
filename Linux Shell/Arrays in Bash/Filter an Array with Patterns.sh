while read line
do
    arr=(${arr[@]} $line)
done
for i in ${arr[@]}
do
    if [[ $(echo $i | grep -E 'a|A') ]]
    then
        continue
    else
        echo $i
    fi
done