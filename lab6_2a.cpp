//to add 2 numbers by call by value

#include <iostream>
using namespace std;

//Function for sum
int sum(int a,int b)
{

	int sum=a+b;
	return sum;

}

int main()
{
	int a,b;

	//user prompt
	
	cout<<"Enter the numbers to be added"<<endl;

	//numbers input

	cin>>a>>b;

	//call the function for sum and print 

	cout<<"The numbers are "<<sum(a,b)<<endl;

	return 0;
}
