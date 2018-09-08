//to find the bigger one in 2 numbers by call by reference

#include <iostream>
using namespace std;

//function for the max number
void max(int a,int b, int &m)
{
if (a>b)
m=a;
else  
m=b;
}

int main()
{
	int a,b,m;

	//user prompt
	
	cout<<"Enter the numbers whose maximum is to be found"<<endl;

	//numbers input

	cin>>a>>b;

	//call the function for max and print 

	max(a,b,m);

	cout<<"The bigger number is "<<m<<endl;

	return 0;
}
