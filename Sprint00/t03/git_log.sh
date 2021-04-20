touch git_history.txt
echo "$(git log --pretty="%h %s" -3)" >> "git_history.txt"
