#include <iostream>
using namespace std;
main()
{
	char b[20],a[10];
	cin>>a;
	cin>>b;
	int i;
	for(i=0;a[i]!='\0';i++)
	{
	}
	a[i]=' ';
	i=i+1;
	for (int j=0;b[j]!='\0';j++)
	{
		a[i]=b[j];
		i++;
	}
	a[i]='\0';
	cout<<a;
}
