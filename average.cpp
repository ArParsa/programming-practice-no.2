#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
	int tedad;
	float min=0,max=0,avg,grade,sum=0,j;
	cout << "enter tedad:"<<endl;
	cin >> tedad;
	cout << "enter grade student 1:"<<endl;
	cin >> j;
	sum = min = max = j;

	for (int i = 2; i <= tedad; i++) 
	{
		cout << "enter grade:"<<endl;
		cin >> grade;
		sum += grade;
		if (grade > max) 
		{
			max = grade;
		}
		else if (grade < min) 
		{
			min = grade;
		}
	}
	avg = sum/tedad;
	cout << "min: " << min << endl;
	cout << "max: " << max << endl;
	cout << "average: " << avg << endl;
	return 0;
}
