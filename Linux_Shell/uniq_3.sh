explaination-
Display the count and the line, separated by a space. There shouldn't be leading or trailing spaces. Please note that the uniq -c command
by itself will generate the output in a different format.


ans-
#compare consecutive lines in a case insensitive manner. So, if a line X is followed by case variants, the output should count all of them 
as the same (but display only the form X in the second column).
uniq -i -c | cut -c7-
