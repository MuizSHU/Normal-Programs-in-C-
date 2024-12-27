#include<iostream>
using namespace std;
int main()
{
	int i,j,p;
	
	cout<<"Enter 1st Number: ";
	cin>>i;
	
	cout<<"Enter 2nd Number: ";
	cin>>j;
	
	cout<<"Enter 3rd Number: ";
	cin>>p;
	
	if( i>=j )
	{
		if(i>=p)
		{
			cout<<"1st Number is the largest.";
		}
		else
		{
			cout<<"3rd Number is largest.";
		}
    }
    else
    {
    	if(j>=p)
    	{
    		cout<<"2nd Number is largest.";
		}
		
		else
		{
			cout<<"3rd Number is largest.";
		}
	}
    
	
	return 0;
	
	
	
}