#include <iostream>
using namespace std;
main()
{
	int a,rev=0,rem;
	cin>>a;
	while(a!=0)
	{
		rem=a%10;
		rev=rev*10+rem;
		a=a/10;
		cout<<rev<<endl;
	}
	cout<<rev;
}
