#include <iostream>
using namespace std;
main()
{
	int a[10]={8,5,7,4,2,3,4,5,4,7};
	int temp;
	for(int i=0;i<10;i++)
	{
		for (int j=i+1;j<10;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
		
		}
		
	}
	for (int k=0;k<10;k++)
	{
		cout<<a[k]<<endl;
	}
}
