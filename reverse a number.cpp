#include<iostream>
using namespace std;
int reversenum(int n)
{
int rev,digit;
while(n!=0)
{
digit=n%10;
rev=rev*10+digit;
n=n/10;
}
return rev;
}
int main()
{
int num,j;
cout<<"enter a number to reverse =>";
cin>>num;
if(num<=0)
{
	cout<<"Invalid Input";
}
else
{
	j=reversenum(num);
}
j=reversenum(num);
cout<<j;
}

