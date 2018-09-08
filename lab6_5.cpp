//to perform operations on 2 numbers by according to user choice 

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

//function for the max number

int max(int a,int b)
{
	if (a>b)
		return a;
	else  
		return b;
}

//Function for sum

int sum(int a,int b)
{

	int sum=a+b;
	return sum;

}

int main()
{
	int a,b,p,v;

	//user prompt
		
	prompt:	
	{
		cout<<"Enter the operation to be performed"<<endl<<"Press the serial number for the same"<<endl<<"1. Minimum"<<endl<<"2. Maximum"<<endl<<"3. Sum"<<endl;
		cin>>p;

	}
	if (p==1)
	{
		cout<<"Enter two numbers"<<endl;
		cin>>a>>b;
		v=min(a,b);
	}
	else if(p==2)
	{
		cout<<"Enter two numbers"<<endl;
		cin>>a>>b;
		v=max(a,b);

	}
	else if(p==3)
	{
		cout<<"Enter two numbers"<<endl;
		cin>>a>>b;
		v= sum(a,b);
	}
	else 
	{
		cout <<"Invalid choice try again"<<endl; 
		goto prompt;
	}
	cout<<"The required value is "<<v<<endl;
	return 0;
}
