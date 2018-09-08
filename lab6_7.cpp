//to change the case of an alphabet to be input
#include <iostream>
using namespace std;

//function for capital

char toUpper(char c)
{
	c-=32;
	return c;
}

//function for small

char toLower(char c)
{
	c+=32;
	return c;
}

int main()
{	//declaration
	char inputChar;
	
	//user prompt	

	prompt:
	{
		cout <<"Enter the alpahabet whose case has to be Changed"<<endl;
		cin>> inputChar;
	}
	
	//condition for function call

	if(inputChar>=97 && inputChar<=122)
		cout <<toUpper(inputChar)<<endl;
	else if (inputChar>=65 && inputChar<=90)
		cout <<toLower(inputChar)<<endl;

	//condition for wrong input

	else
	{
		cout<<"Invalid input.Try again"<<endl;
		goto prompt;
	}
	return 0;
}
