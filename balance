#! /usr/bin/env bash

cat $1|cut -d ':' -f 3 $1|paste -s -d'+'|bc
#cat $1: Outputs content of first argument

#cut -d ':' -f 3 $1: Removes the ':' delimiter
#between columns and selects only the 3rd field
#from the first argument

#paste -s -d+ -: (-s) Paste all onto one line seperated
#by tab (default delimiter).
#Replaces tab delimited spaces with '+'

#bc: Feeds stdout to bc (calculator) as stdin
