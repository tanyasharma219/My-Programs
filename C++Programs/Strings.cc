STRING : C++ provides a nice alternative data type to manipulate strings, and the data type is conveniently called string.

Task- In the first line print two space-separated integers, representing the length of a and b respectively.
      In the second line print the string produced by concatenating a and b(a-b).
      In the third line print two strings separated by a space, a' and b'.a' and b' are the same as a and b , respectively, 
      except that their first characters are swapped.
      
  ans:
  
  #include <iostream>
#include <string>
using namespace std;
int main()
{

  string a,b;

    cin>>a;
    cin>>b;

    int len1 = a.size();
    int len2 = b.size();

    cout<<len1<<" "<<len2<<endl;

    cout<<a<<b<<endl;

    char c;
    c=a[0];
    a[0]=b[0];
    b[0]=c;

    cout<<a<<" "<<b;

    return 0;
}
