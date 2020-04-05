TASK:
      1.Find the array located at index i=0 , which corresponds to a[0]=[1,5,4}. We must print the value at index j=1 of this array which, 
        as you can see, is 5.
      2.Find the array located at index i=1, which corresponds to a[1]=[1,2,8,9,3]. We must print the value at index j=3 of this array 
        which, as you can see, is 9.
        
 ans:
 #include <iostream>
#include <cstdio>
using namespace std;

int main()
{
 //Ghanendra Yadav
int n,q;
cin>>n>>q;
int** seq=new int* [n];
for(int i=0;i<n;i++)
    {
      int a;
      cin>>a;
      int* b=new int [a];
      for(int j=0;j<a;j++)
        {
          int e;
          cin>>e;
          b[j]=e;
        }
    *(seq+i)=b;
   }

  for(int i=0;i<q;i++)
  {
  int r,s;
  cin>>r>>s;
  cout<<seq[r][s]<<endl;
  }
}
