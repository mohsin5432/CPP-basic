#include <iostream>
#include <string>
#include <fstream>

using namespace std;
struct stud{
	int roll;
	int marks;
	string name;
};
stud s;
main()
{
	x:
	int c;
	cout<<"Enter choise\n1->add rec\n2->display rec\n";
	cin>>c;
	if (c==1)
	{
	cout<<"Enter Roll no ";
	cin>>s.roll;
	cout<<"Enter Marks ";
	cin>>s.marks;
	cin.ignore();
	cout<<"Enter name";
	getline(cin,s.name);
	ofstream file("data.txt",ios::app);
	file<<s.roll<<"\n";
	file<<s.marks<<"\n";
	file<<s.name<<"\n\n";
	file.close();
	}
	else if(c==2)
	{
	
	ifstream read;
	read.open("data.txt");
	string roll,marks,name,space;
	while(read)
	{	
	if(read.eof()) 
	{
	break;
	read.close();
	}
	else
	{
		getline(read,roll);
		getline(read,marks);
	 	getline(read,name);
	 	getline(read,space);
		
		cout<<"Name : "<<name<<endl;
		cout<<"marks : "<<marks<<endl;
		cout<<"roll : "<<roll<<endl;
	}

	}
	}
	goto x;
}
		
	

	

