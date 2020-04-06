Awk-1
 task-  You are given a file with four space separated columns containing the scores of students in three subjects. 
       The first column contains a single character (A-Z), the student identifier. The next three columns have three numbers each. 
       The numbers are between 0 and 100 , both inclusive. These numbers denote the scores of the students in English, Mathematics, and Science,
        respectively.
       Your task is to identify those lines that do not contain all three scores for students.

ans-
awk '{if (length($4)==0) print "Not all scores are available for " $1}'


Awk- 2
task-   (same description as awk-1)Your task is to identify whether each of the students has passed or failed.
          A student is considered to have passed if (s)he has a score  or more in each of the three subjects.
          
ans-
awk '{print $1,":", ($2<50||$3<50||$4<50) ? "Fail" : "Pass"}'

Awk- 3
task-  (same description as awk-1) Your task is to identify the performance grade for each student. If the average of the three scores 
        is 80 or more, the grade is 'A'. If the average is 60 or above, but less than 80, the grade is 'B'. If the average is 50 or above,
        but less than 60, the grade is 'C'. Otherwise the grade is 'FAIL'.
        
ans-
 awk '{avg=($2+$3+$4)/3; print $0, ":", (avg<50)?"FAIL":(avg<80)?"B":"A"}'
 
 Awk- 4
task-  (same description as awk-1)Concatenate every 2 lines of input with a semi-colon.

ans-
awk 'ORS=NR%2?";":"\n"'
