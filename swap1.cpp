#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"Enter the values to be swapped:"<<endl;
	cin>>a;
	cin>>b;
	temp=a;
	a=b;
	b=temp;
	cout<<"swapped values are:"<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
}
