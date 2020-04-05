ques: mainly practicing reading input from stdin and printing output to stdout.
task is- Read 3 numbers from stdin and print their sum to stdout.

ans:
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long double a,b,c,sum=0;
    cin>>a>>b>>c;
    sum=a+b+c;
    cout<<sum;
    return 0;
}
