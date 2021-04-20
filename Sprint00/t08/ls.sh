for entry in `ls $1`; do
	echo $entry "$(cut -d' ' -f1 <<< `du -sh $1/$entry`)"
done