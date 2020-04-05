For Loop:  A for loop is a programming language statement which allows code to be repeatedly executed.
task- For each integer n in the interval [a,b]:
      If , then print the English representation of it in lowercase. That is "one" for 1, "two" for 2 , and so on.
      Else if 1<=n<=9 and it is an even number, then print "even".
      Else if n>9  and it is an odd number, then print "odd".

ans:
int num1,num2;
cin >> num1 >> num2;
string Arr1[9] = {"one","two","three","four","five","six","seven","eight","nine"};
for(int i =num1; i <= num2;i++)
{
if(i <= 9)
{
cout << Arr1[i-1] << endl;
}
else
{
if(i%2 ==0)
{
cout << "even" << endl;
}
else
{
cout << "odd" << endl;
}
}
}
