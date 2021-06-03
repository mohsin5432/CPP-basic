#include <iostream>
using namespace std;
main()
{
	int a[10];
	for(int i=0;i<10;i++)
	{
		cout<<"Enter no ; ";
		cin>>a[i];
	}
	for(int j=0;j<10;j++)
	{
		int occ=1;
		for(int k=j+1;k<10;k++)
		{
			if(a[j]==a[k])
			occ=occ+1;
		}
		int check=0;
		if(j>0)
		{
		for(int z=j-1;z>=0;z--)
		{
			int c=j;
			if(a[j]==a[z])
			{
				check=check+1;
			}
		}
		}
		if (check==0)
		{
			cout<<a[j]<<" occurs "<<occ<<endl;
		}
	}
}

