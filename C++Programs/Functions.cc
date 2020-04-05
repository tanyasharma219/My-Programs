FUNCTIONS: Functions are a bunch of statements glued together. A function is provided with zero or more arguments, 
           and it executes the statements on it. Based on the return type, it either returns nothing (void) or something.
           
 Task- Print the greatest of the four integers.
       PS: I/O will be automatically handled.
       
ans:
#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
if(a>b&&a>c&&a>d)
{
        cout<<a;
        return(a);
}
else if(b>a&&b>c&&b>d)
{
        cout<<b;
        return(b);
}
else if(c>b&&c>a&&c>d)
{
        cout<<c;
         return(c);
}  
else
{
        cout<<d;
        return(d);
}
}

int main()
{
    int a, b, c, d,max;
    cin>>a>>b>>c>>d;
    max=max_of_four(a,b,c,d);
}
