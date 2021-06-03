#include <iostream>
using namespace std;
main()
{
	char b[20],a[10];
	cin>>a;
	cin>>b;
	for (int j=0;b[j]!='\0';j++)
	{
		a[j]=b[j];
	}
	cout<<a;
}
