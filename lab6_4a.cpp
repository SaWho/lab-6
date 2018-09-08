//to minimum of 2 numbers by call by value

#include <iostream>
using namespace std;
//function for the min  number
int min(int a,int b)
{
if (a<b)
return a;
else  
return b;
}

int main()
{
	int a,b;

	//user prompt
	
	cout<<"Enter the numbers whose minimum is to be found"<<endl;

	//numbers input

	cin>>a>>b;

	//call the function for min  and print 

	cout<<"The smaller number is "<<min(a,b)<<endl;

	return 0;
}
