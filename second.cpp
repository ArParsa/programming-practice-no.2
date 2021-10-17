#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
	int hour, minute, second, sum;
	hour = minute = second = sum = 0;
	cout<<"Enter hour:minute:second"<<endl;
	cin>>hour>>minute>>second;
	sum = hour * 3600+sum;
	sum = minute * 60+sum;
	sum = second+sum;
	cout << "sum is " << sum << " seconds";
	
	return 0;
}
