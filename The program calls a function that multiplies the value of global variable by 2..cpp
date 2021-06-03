//The program calls a function that multiplies the value of global variable by 2. 
//The main function then displays the value of global variable
#include <iostream>
using namespace std;
int g=10;
int globe(int a)
{
	g=g*2;
}
main()
{
	cout<<"the value of global variable is="<<g;
}
