STRUCT: struct is a way to combine multiple fields to represent a composite data structure, which further lays the foundation for Object 
        Oriented Programming. For example, we can store details related to a student in a struct consisting of his age (int), 
        first_name (string), last_name (string) and standard (int).
        
task- Output will be of a single line, consisting of age, first_name, last_name and standard, each separated by one white space.
      P.S.: I/O will be handled by HackerRank.
      
ans:
hint- You have to create a struct, named Student, representing the student's details,  and store the data of a student.
code:
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student
{
int age,standard;
string first_name,last_name;
};

int main() {
    Student st;
    
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}
