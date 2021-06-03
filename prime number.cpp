#include <iostream>
using namespace std;
int main () 
{
	int a[5][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
for(int k=0;k<5;k++)
{	
    for (int i=0; i<5; i++) 
    {
        for (int j=2; j<a[k][i]; j++)
        {
            if (a[k][i] % j == 0) 
                break;
            else if (a[k][i]== j+1)
                cout << a[k][i] << " ";

        } 
	}
}
    return 0;
}
