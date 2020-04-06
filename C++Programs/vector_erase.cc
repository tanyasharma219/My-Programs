VECTOR ERASE: You are provided with a vector of n integers. Then, you are given 2 queries. For the first query, you are provided with 1
               integer, which denotes a position in the vector. The value at this position in the vector needs to be erased. 
               The next query consists of 2 integers denoting a range of the positions in the vector. The elements which fall under that 
               range should be removed. The second query is performed on the updated vector which we get after performing the first query.
              The following are some useful vector functions:

               1.erase(int position):
                Removes the element present at position.  
                Ex: v.erase(v.begin()+4); (erases the fifth element of the vector v)
               
               2.erase(int start,int end)
                Removes the elements in the range from start to end inclusive of the start and exclusive of the end.
                Ex:v.erase(v.begin()+2,v.begin()+5);(erases all the elements from the third element to the fifth element
                
  task:    Print the size of the vector in the first line and the elements of the vector after the two erase operations in the second
           line separated by space.
           
  ans:
  #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i,b,c,d,size;
    cin>>n;
    vector<int> a;
    for(i=0;i<n;i++)
        {
        int x;
        cin>>x;
        a.push_back(x);
        }
    cin>>b>>c>>d;
    a.erase(a.begin()+b-1);
    a.erase(a.begin()+c-1,a.begin()+d-1);
    
    size=a.size();
    
    cout<<size<<endl;
    for(i=0;i<size;i++)
        cout<<a[i]<<" ";
    return 0;
}
