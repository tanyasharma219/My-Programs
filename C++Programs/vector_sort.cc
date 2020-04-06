 task- You are given N integers.Sort the N integers and print the sorted order.
       Store the N  integers in a vector.Vectors are sequence containers representing arrays that can change in size.
 ans:
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

int n,i;

cin>>n;

vector<int> arr(n);

for(i=0;i<n;i++)
cin>>arr[i]; 
{
sort(arr.begin(),arr.end());
}

for(i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}

return 0;

}
