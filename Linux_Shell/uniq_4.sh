explaintation-
The comparison is case sensitive, so the first instance of "A00" and "a00" are considered different, hence unique.
The next instance of A00 is succeeded and preceded by different lines, so that is also included in the output.
The same holds true for 03 - it is succeeded and preceded by different lines, so that is also included in the output.



ans-#Given a text file, display only those lines which are not followed or preceded by identical replications. 
uniq -u
