#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
	int n;
	int sum=0;
	string i;
	
	while(i!="exit")
	{
		cout<<"please enter a number: "<<endl;
		cin>>n;
		sum=n+sum;
		cout<<"type 'no' to continue or type 'exit'"<<endl;
		cin>>i;
	}
	
	cout<<"sum is: "<<sum<<endl;
	
	return 0;
	
}
