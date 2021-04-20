shopt -s nocasematch
text=$(cat -e $1)
IFS="$"
array=($text)
for character in "${array[@]}"
do 
    [[ "$(echo "$(cut -d' ' -f1 <<< $character)" | xargs)" = "redpill" ]] && echo $character | xargs
done