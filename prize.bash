echo "enter the number"
read n
if [ $n -eq 101 ];
then 
echo "first prize"
elif [ $n -eq 510 ];
then 
echo "second prize"
elif [ $n -eq 999 ];
then 
echo "third prize"
else
echo "sorry try next time"
fi