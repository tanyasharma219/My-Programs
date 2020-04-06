SETS-STL  :Sets are a part of the C++ STL. Sets are containers that store unique elements following a specific order. Here are some of the frequently used member functions of sets:

         Declaration:

         set<int>s; //Creates a set of integers.
         
         Size:

         int length=s.size(); //Gives the size of the set.
         
         Insert:

         s.insert(x); //Inserts an integer x into the set s.
          
         Erasing an element:

         s.erase(val); //Erases an integer val from the set s.
 
         Finding an element:

         set<int>::iterator itr=s.find(val); //Gives the iterator to the element val if it is found otherwise returns s.end() .
         Ex: set<int>::iterator itr=s.find(100); //If 100 is not present then it==s.end().
         
TASK-   For queries of type 3 print "Yes"(without quotes) if the number x is present in the set and if the number is not present, 
         then print "No"(without quotes).
        Each query of type 3 should be printed in a new line.   
        
 ans: 
 #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n;
    set<int>s;
    for(int i=0;i<n;i++)
        {
        int a;
        cin>>a;
        s.insert(a);
        }
    cin>>n;
    for(int i=0;i<n;i++)
        {
        int q,t;
        cin>>t>>q;
        switch(t)
            {
            case 1:
            {
                s.insert(q);
                break;
            }
            case 2:
            {
                s.erase(q);
                break;
            }
            case 3:
            {
                set<int>::iterator itr=s.find(q);
                if(itr==s.end())
                   cout<<"No"<<endl;
                else
                   cout<<"Yes"<<endl;
                break;
            }
            }
        }
    return 0;
}
