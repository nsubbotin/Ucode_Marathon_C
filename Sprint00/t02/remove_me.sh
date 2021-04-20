for a in "$@"
do 
rm $a && rmdir $a
done
