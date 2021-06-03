#include <iostream>
using namespace std;
main()
{
	char a[6][20];
	int b[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter name= ";
		cin>>a[i];
	}
	for(int k=0;a[k]!="\0";k++)
	{
		cout<<"Enter marks of "<<a[k]<<" =";
		cin>>b[k];
	}
	
	for(int j=0;j<5;j++)
	{
		cout<<"\t\t\t\t"<<a[j]<<" got "<<b[j]<<" marks"<<endl;
	}
	
	
}
