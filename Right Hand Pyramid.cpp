#include<iostream>
using namespace std;
int main()
{
	int rows = 5;
	int i,j;
	
	for(i=1; i<=rows; i++)
	{
		for(j=1; j<=i; j++)
		{
			cout<<"*";
		}
		
		cout<<"\n";
	}
	
	return 0;
}