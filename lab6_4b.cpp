//to find the smaller one in 2 numbers by call by reference

#include <iostream>
using namespace std;

//function for the min number
void min(int a,int b, int &m)
{
if (a<b)
m=a;
else  
m=b;
}

int main()
{
	int a,b,m;

	//user prompt
	
	cout<<"Enter the numbers whose minimum is to be found"<<endl;

	//numbers input

	cin>>a>>b;

	//call the function for min and print 

	min(a,b,m);

	cout<<"The smaller number is "<<m<<endl;

	return 0;
}
