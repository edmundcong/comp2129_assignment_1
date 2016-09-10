#! /usr/bin/env bash

# awk -F

#Write a program called outstanding that outputs the names of the customers with valid cards
#who did not have enough money stored on their card to pay their fare. The program will take five
#arguments: the path to the database file and the coordinate modifiers a, b, c, d described in task 2.
#Here is an example using the database file above:

#Not completed - testing file reading


while read line
do
  dbLine=$line
  echo "$dbLine"
  ./farecalc A B C D < $dbLine
done < $1
#reading first arguement that isn't ./outstanding.sh


A=$2
B=$3
C=$4
D=$5

balance=$(cut -d ':' -f 3 $1)
#balance=$(cut -d ':' -f 3 $1)

xy1=$(cut -d ':' -f 4 $1)
xy2=$(cut -d ':' -f 5 $1)

#echo "xy1:"
#echo "$xy1"

echo "$balance"
#echo "A is $A"
#echo "B is $B"
#echo "C is $C"
#echo "D is $D"
