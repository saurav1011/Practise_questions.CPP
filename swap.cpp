#include<iostream>
using namespace std;
void swap(int *x ,int *y );
int main()
{
	int x,y;
	x=100;
	y=20;
	
	cout<<"before swapping"<<endl;
	cout<<"x"<<x<<"y"<<y<<endl;
	
	swap(&x,&y);
	
		cout<<"after swapping"<<endl;
	cout<<"x"<<x<<"y"<<y<<endl;
	
	return 0;
	
	

}

void swap(int *x, int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

