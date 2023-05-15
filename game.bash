echo "enter any num"
read n
if [[ ( $n -eq 15 || $n -eq 45) ]];
then 
echo "you won the game"
else
echo "you lost the game"
fi