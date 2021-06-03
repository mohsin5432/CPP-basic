//convert millimeters to Inches and another function to convert Inches to millimeters
#include <iostream>
using namespace std;
void lenth(float a)
{
	float mili,inch,b;
	cout<<"ENTER YOUR CHOISE\n1 FOR MILI INTO INCH\n2 FOR INCHES INTO MILI\n=";
	cin>>b;
	if (b==1)
	{
		cout<<"Enter the lenth in milimeters";
		cin>>mili;
		inch=mili/0.039;
		cout<<"LENGTH IN INCHES="<<inch;
	}
	else if (b==2)
	{
		cout<<"Enter the lenth in inches";
		cin>>inch;
		mili=inch*0.039;
		cout<<"LENTH IN MILIMETERS="<<mili;
	}
	else
	cout<<"you entered a wrong choise";
	
}
main()
{
	float h;
	lenth(h);
}
