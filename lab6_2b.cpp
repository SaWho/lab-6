//to add 2 numbers by call by reference

#include <iostream>
using namespace std;

//Function for sum
void sum(int a,int b,int &s)
{

	s=a+b;
	
}

int main()
{
	int a,b,s;

	//user prompt
	
	cout<<"Enter the numbers to be added"<<endl;

	//numbers input

	cin>>a>>b;

	//call the function for sum and print 

	sum(a,b,s);

	cout<<"The numbers are "<<s<<endl;

	return 0;
}
