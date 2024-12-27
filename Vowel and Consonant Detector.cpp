#include<iostream>
using namespace std;
int main()
{
	char letter;
	
	cout<<"Enter an Alphabet: ";
	cin>>letter;
	
	if( letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u')
	{
		cout<<"This is a Vowel.";
	}
	
	else
	{
		cout<<"This is a Consonant.";
	}
	
	return 0;
}