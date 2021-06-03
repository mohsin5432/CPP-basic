#include <iostream>
using namespace std;
int maxarr(int a[4][4])
{
	int max=a[0][0];
	for (int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if (max<a[i][j])
			max=a[i][j];
		}
	}
return max;	
}
int minarr(int b[4][4])
{
	int min=b[0][0];
	for (int x=0;x<4;x++)
	{
		for(int y=0;y<4;y++)
		{
			if (min>b[x][y])
			min=b[x][y];
		}
	}
return min;	
}

main()
{
	int s[4][4];
	for (int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<"Enter number=";
			cin>>s[i][j];
		}
	}
	cout<<"\t\t\t\tMAXIMUM NUMBER YOU ENTERED IS="<<maxarr(s)<<"\n\n\t\t\t\tTHE MINIMUM NUMBER YOU ENTERED IS="<<minarr(s);	
}
