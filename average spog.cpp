//Theres a customer that always comes to a store and buys 6 diferent products, but the problem is that he always takes too much time chosing and trying the products be cause he needs that the average of the products gives an integer.  
//Input
//As input it will be gived at you 6 lines with the values of each product
//Output
//Your problem should give as result the average value of the total of elements.
#include<iostream>
using namespace std;
int sum(int a[])
{  
    int sum = 0; // initialize sum  
    // Iterate through all elements  
    // and add them to sum 
    for (int i = 0; i < 6; i++)  
    sum += a[i];  
    return sum;  
}
int main(){
	int x[5],j;
	for (j=0;j<=6;j++){
	cout<<"enter the price of "<<j+1<<" element"<<endl;
	cin>>x[j];
	}
	if(sum(x)%6==0)
	{
cout<<sum(x)/6<<endl;
}
else
cout<<"Error"<<endl;
return 0;
}
