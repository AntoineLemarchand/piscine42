#!/bin/sh
FT_LINE1=5
FT_LINE2=10
# cat /etc/passwd | sed 's/#.*//g' | sed 's/:/ /g' | awk '{print $1}' | awk '!(NR%2)' | rev | sort -r | awk -v begin=$FT_LINE1 -v end=$FT_LINE2 '(NR > begin) && (NR < end)' | sed 's/\n/, /' | sed 's/, *$/./'
cat /etc/passwd | grep -v '#' | awk 'NR%2==0' | cut -d : -f 1 | rev | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2" | sort -r | tr '\n' ' ' | sed '$ s/ $/./' | sed 's/ /, /g' | tr -d '\n'
