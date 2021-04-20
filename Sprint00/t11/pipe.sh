shopt -s nocasematch
IFS="$"
array=($(cat -e $1))
for character in "${array[@]}"; do
    [[ "$(echo "$(cut -d' ' -f1 <<< $character)" | xargs)" = "redpill" ]] && echo $character | sed 's/[Rr][Ee][Dd][Pp][Ii][Ll][Ll]/bluepill/' | xargs
done