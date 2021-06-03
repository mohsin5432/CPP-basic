#include <iostream>
using namespace std;
main()
{
	int r,c;
	cout<<"ENTER THE ROWS OF MATRICES= ";
	cin>>r;
	cout<<"ENTER THE COLUMN OF MATRICES= ";
	cin>>c;
	int a[r][c];
	for(int i=0;i<r;i++)
	{
		for (int j=0;j<c;j++)
		{
			cout<<"Enter no= ";
			cin>>a[i][j];
		}
	}
	cout<<"\t\t\tOrignal Matrice:"<<endl;
	for(int i=0;i<r;i++)
	{
		cout<<"\t\t\t\t";
		for (int j=0;j<c;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n\n";
	cout<<"\t\t\ttranspose of a matrices:"<<endl;
	for(int i=0;i<r;i++)
	{
		cout<<"\t\t\t\t";
		for (int j=0;j<c;j++)
		{
			cout<<a[j][i]<<" ";
		}
		cout<<"\n";
	}
	
}
