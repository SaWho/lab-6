//to sum even,odd,even squares and odd sqaures
#include <iostream>
using namespace std;

//function for sum of even

int sumEvenNumbers(int a,int b)
{
	int sum=0,g=((a>b)?a:b),s=((a<b)?a:b);
	for (int i=s;i<=g;i++)
	{
		if(i%2==0)
			sum+=i;
	}
	return sum;

}

//function for sum of odd

int sumOddNumbers(int a,int b)
{
	int sum=0,g=((a>b)?a:b),s=((a<b)?a:b);
	for (int i=s;i<=g;i++)
	{
		if(i%2!=0)
			sum+=i;
	}
	return sum;

}


//function for sum of squares of evens

int sumSquareEvenNumbers(int a,int b)
{
	int sum=0,g=((a>b)?a:b),s=((a<b)?a:b);
	for (int i=s;i<=g;i++)
	{
		if(i%2==0)
			sum+=(i*i);
	}
	return sum;

}

//function for sum of squares of odds

int sumSquareOddNumbers(int a,int b)
{
	int sum=0,g=((a>b)?a:b),s=((a<b)?a:b);
	for (int i=s;i<=g;i++)
	{
		if(i%2!=0)
			sum+=(i*i);
	}
	return sum;

}

int main()
{
	//declaration

	int firstNum,secondNum,sumEven,sumOdd,sumSquareEven,sumSquareOdd;

	//user prompt

	cout <<"Enter the 2 values to be used as range"<<endl;

	//input

	cin>>firstNum>>secondNum;
	sumEven=sumEvenNumbers(firstNum,secondNum);
	sumOdd=sumOddNumbers(firstNum,secondNum);
	sumSquareEven=sumSquareEvenNumbers(firstNum,secondNum);
	sumSquareOdd=sumSquareOddNumbers(firstNum,secondNum);

	//output
	
	cout<<"The sum of :"<<endl<<"Even="<<sumEven<<endl<<"Odd="<<sumOdd<<endl<<"Square of evens="<<sumSquareEven<<endl<<"Square of odds="<<sumSquareOdd<<endl;
	
	return 0;
}
