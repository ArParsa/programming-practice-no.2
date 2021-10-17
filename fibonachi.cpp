#include<iostream>
#include<math.h>

using namespace std;
int main()
{
    int n;
    cout<<"enter tedad: "<<endl;
    cin>>n;
    int a=1,b=1,i=2,c;
    cout<<a<<endl;
    cout<<b<<endl;

   	while (i<n)
  	{
   		c=a+b;
   		cout<<c<<endl;
   		a=b;
    	b=c;
    	i++;
 	}
   return 0;
}
