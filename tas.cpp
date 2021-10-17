#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{
	srand(time(0));
	int a;
	a = (rand() % 6) + 1;
	cout << a << endl;
	while (a == 6) 
	{
		cout<<"congrats!"<<endl;
		a = (rand() % 6) + 1;
		cout<<"your reward is: "<< a << endl;
	}
	return 0;
}
