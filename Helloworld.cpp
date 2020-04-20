#include<iostream>
using namespace std;
sum(int a,int b){
	return a+b;
}
int main(){
	int a,b;
	cout<<"enter 2 numbers"<<endl;
	cin>>a>>b;
	cout<<"sum of two numbers is :"<<sum(a,b)<<endl;
	return 0;
}
