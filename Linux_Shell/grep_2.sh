Grep A
task-   Given a text file, which will be piped to your command through STDIN, use grep to display all those lines which contain any of the following words in them:
        the
        that
        then
        those
        The search should not be sensitive to case. Display only those lines of an input file, which contain the required words.
        
ans-
#We retain only those lines which have at least one of the following words: 
# the 
# that 
# then 
# those
grep -iwe "the\|that\|then\|those"


Grep A
task-  Given an input file, with N credit card numbers, each in a new line, your task is to grep out and output only those credit card 
       numbers which have two or more consecutive occurences of the same digit (which may be separated by a space, if they are in different
       segments). Assume that the credit card numbers will have 4 space separated segments with 4 digits each.

       If the credit card number is 1434 5678 9101 1234, there are two consecutive instances of 1 (though) as highlighted in box brackets: 1434 5678 910[1] [1]234
       
ans-
grep '\([0-9]\) *\1'
       
