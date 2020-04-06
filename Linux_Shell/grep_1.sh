Grep #1
task-  You are given a text file that will be piped into your command through STDIN. Use grep to display all the lines that contain the
       word the in them. The search should be sensitive to case. Display only those lines of the input file that contain the word 'the'.
       
       
 ans-
 #Output only those lines that contain the word 'the'. The search should be case sensitive. The relative ordering of the lines in the output should be the same as it was in the input.
  grep -w "the"


Grep #2
task-   You are given a text file that will be piped into your command through STDIN. Use grep to display all those lines that contain the word the in them.
       The search should NOT be sensitive to case.
        Display only those lines of the input file that contain the word 'the'.
        
        
ans-
# Output only those lines that contain the word 'the'. The search should NOT be case sensitive. The relative ordering of the lines in the
  output should be the same as it was in the input.
   grep -iw "the"
   
  
Grep #3
task-  You are given a text file that will be piped into your command through STDIN. Use grep to remove all those lines that contain the
        word 'that'. The search should NOT be sensitive to case.
        
ans-
# Only display those lines that do NOT contain the word 'that'. The relative ordering of the lines should be the same as it was in the
input file.

grep -iv "that"

        
