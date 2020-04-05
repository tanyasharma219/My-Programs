Conditional statements

if and else are two of the most frequently used conditionals in C/C++, and they enable you to execute zero or one conditional statement among many such dependent conditional statements. We use them in the following ways:

task- if 1<=n<=9 , then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.).
      If n>9, print Greater than 9.
      
ans:
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string num[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cin >> n;

    if(n > 9)
    {
        cout << num[0];
    }
    else
    {
        cout << num[n];
    }
  
    return 0;
}
