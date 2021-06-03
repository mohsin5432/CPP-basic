//function to check whether the number passed to it is a palindrome or not
#include <iostream>
#include <cmath>
using namespace std;
void palind(int a)
{
	float rem;
	int sum=0;
	
	int y=a;
	while (a!=0)
	{
	rem=a%10;
	sum=sum*10+rem;
	a=a/10;
	}
	if (sum==y)
	cout<<"The number is Palindrome";
	else
	cout<<"The number is not Palindrome";
}
main()
{
	int h;
	cout<<"enter any number=";
	cin>>h;
	palind(h);
}
