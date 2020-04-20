#include<iostream>
using namespace std;
int main()
{
	int fact(int a);
	int a;
	cout<<"pls enter a no. for factorial ";
	cin>>a;
	int b;
	b=fact(a);
	cout<<"the factorial is:"<<b<<endl;
}
fact(int a)
{

	if (a==1||a==0) return 1;
	else return a*fact(a-1);
}
