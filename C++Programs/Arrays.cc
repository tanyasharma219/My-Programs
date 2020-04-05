ARRAYS : An array is a series of elements of the same type placed in contiguous memory locations that can be individually referenced 
         by adding an index to a unique identifier.
         
task - Print the N integers of the array in the reverse order in a single line separated by a space.   

ans: Explanation:- We know that array is used to store similar datatype and an array used continues memory location in this problem
     we have to take an input from user and print reverse output by printing the last index first until an array first index. 
code:     

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];

    for(int i = 0; i < n; i++)
   {
        cin >> array[i];
    }

    for(int i = n - 1; i >= 0; i--)
   {
        cin >> array[i];
        cout << array[i] << " ";
    }
    return 0;
}
