#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long power(int a,int b)
{
	if(b==1)
	{
		return a;
	}
	long long temp=power(a,b/2);
	if(b%2==0)
	{
		return temp*temp;
	}
	else return a*temp*temp;
}
int main()

{
	int a;
	int b;
	cin>>a;
	cin>>b;
	if(a==1) cout<<1<<endl;
	else
	{
		cout<<power(a,b)<<endl;
	}
	
	return 0;
}
