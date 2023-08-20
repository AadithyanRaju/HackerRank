arr=($(cat))
arr=("${arr[@]/[A-Z]/.}")
echo ${arr[@]}