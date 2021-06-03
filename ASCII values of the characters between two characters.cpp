//ASCII values of the characters between two characters
#include <iostream>
using namespace std;
void ch(char b,char c)
{
	for (int i=b;i<=c;i++)
	{
		cout<<i<<endl;
	}
}
main()
{
	char x,y;
	cout<<"enter first char=";
	cin>>x;
	cout<<"enter second char=";
	cin>>y;
	ch(x,y);
}
