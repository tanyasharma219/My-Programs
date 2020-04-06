Paste 1
Task-  In this challenge, we practice using the paste command to merge lines of a given file.
       You are given a CSV file where each row contains the name of a city and its state separated by a comma. Your task is to replace 
       the newlines in the file with semicolons as demonstrated in the sample.
       
 ans:
  # Replace the newlines in the input file with semicolons
  paste -d";" -s
  
  
Paste 2
Task-   Restructure the file so that three consecutive rows are folded into one line and are separated by semicolons.

ans:
 #Restructure the file so that three consecutive rows are folded into one line and are separated by semicolons. 
  paste -d ";" - - -
  
  
paste 3
Task-   Given a CSV file where each row contains the name of a city and its state separated by a comma, your task is to replace the 
        newlines in the file with tabs as demonstrated in the sample.
        
 ans:
   # The delimiter between consecutive rows of data has been transformed from the newline to a tab. 
# Previous solution: paste -s -d"\\t"
# The delimiter option is not necessary as tab is the delimiter of paste by default
paste -s


Paste 4
Task-   Restructure the file in such a way, that every group of three consecutive rows are folded into one, and separated by tab.

ans:
# Restructure the file in such a way, that every group of three consecutive rows are folded into one, and separated by tab. 
paste - - -

