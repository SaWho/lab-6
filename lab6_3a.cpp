//to find the bigger number in 2 numbers by call by value

#include <iostream>
using namespace std;

//function for the max number
int max(int a,int b)
{
if (a>b)
return a;
else  
return b;
}

int main()
{
	int a,b;

	//user prompt
	
	cout<<"Enter the numbers whose maximum is to be found"<<endl;

	//numbers input

	cin>>a>>b;

	//call the function for max and print 

	cout<<"The bigger number is "<<max(a,b)<<endl;

	return 0;
}
