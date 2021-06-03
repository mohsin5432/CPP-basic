//calls a function five times using a loop
#include <iostream>
using namespace std;
int vari(int a)
{
	static int j=0;
	cout<<j++;
	
}
main()
{
	int c;
	for(int i=1;i<=5;i++)
	{
	vari(c);
 	cout<<endl;
 	}
 	
} 
