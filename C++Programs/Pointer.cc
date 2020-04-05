POINTER: A pointer in C is a way to share a memory address among different contexts (primarily functions). They are primarily used whenever a function needs to modify the content of a variable, 
         of which it doesn't have ownership.
    
Task-  You have to complete the function void update(int *a,int *b), which reads two integers as argument, and sets a with the sum of them, 
       and b with the absolute difference of them.
       a'= a+b
       b'= |a-b|
       
 ans:
 #include <iostream>
using namespace std;

void update(int *a,int *b)
{
    int temp = *a;
    *a = *a + *b;
    *b = temp - *b;

    if(*b < 0)
 {
        *b = -(*b);
    }
}

int main() 
{
    int a, b;
    int *pa = &a, *pb = &b;

    cin>>a>>b;
    update(pa, pb);
    cout<<a<<"\n"<<b;

    return 0;
}

