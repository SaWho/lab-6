//to display tax
#include <iostream>
using namespace std;

//input function
void inputUser(int &unitCst,int &unit,int &taxRt)
{
	cout <<"Enter the values of cost, units purchased and tax rate"<<endl;
	cin>>unitCst>>unit>>taxRt;
}
//calculation function
void taxCal(int c,int u,int t,int &st,int &to)
{
	st=c*u*t;
	to=st+c;
}
//tax display function
void taxDisp(int c,int u,int t, int st,int to)
{
	cout<<"Cost per unit="<<c<<endl;
	cout<<"Number of units="<<u<<endl;
	cout<<"Tax Rate="<<t<<endl;
	cout<<"sales tax="<<st<<endl;
	cout<<"Total due="<<to<<endl;
}

int main()
{
	//declaration
	int unitCost,unitsPurch,taxRate,salesTax,totalDue;

	//function call
	inputUser(unitCost,unitsPurch,taxRate);
	taxCal(unitCost,unitsPurch,taxRate,salesTax,totalDue);
	taxDisp(unitCost,unitsPurch,taxRate,salesTax,totalDue);
	return 0;
}

}

