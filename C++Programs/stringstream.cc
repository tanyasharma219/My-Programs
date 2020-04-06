STRINGSTREAM: stringstream is a stream class to operate on strings. It basically implements input/output operations on memory (string)
              based streams. stringstream can be helpful in different type of parsing. 
              The following operators/functions are commonly used here

              1. Operator >> Extracts formatted data.
              2. Operator << Inserts formatted data.
              3.Method str() Gets the contents of underlying string device object.
              4.Method str(string) Sets the contents of underlying string device object.
              Its header file is sstream.
 Task-  Print the integers after parsing it.
        P.S.: I/O will be automatically handled. You need to complete the function only.             

ans:
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{

stringstream ss(str);
vector<int> out;

char ch;
int temp;

while(ss >> temp)
{
out.push_back(temp);
ss >> ch;
}
return out;
}

int main()
{

string str;
cin >> str;

vector<int> integers = parseInts(str);

for(int i = 0; i < integers.size(); i++)
{
cout << integers[i] << "\n";
}

return 0;
}
