#include <iostream>
using namespace std;
main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10},temp;
	for(int i=0;i<10;i++)
	{
		for(int j=i+1;j<10;j++)
		{
			if(a[j]>a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"[ ";
	for(int k=0;k<10;k++)
	{
		cout<<a[k]<<" ";
	}
	cout<<"]"<<endl;
}
