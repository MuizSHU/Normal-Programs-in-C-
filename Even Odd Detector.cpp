#include<iostream>
using namespace std;
int main()
{
	int num;
	
	cout<<"Enter a Number: ";
	cin>>num;
	
	if( num%2==0 )
	{
		cout<<"This Number is Even.";
	}
	else
	{
		cout<<"This Number is Odd.";
	}
	
	return 0;
}