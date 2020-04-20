//rewrite small numbers from input to output. Stop processing input after reading in the number 42. All numbers at input are integers of one or two digits.

#include <iostream>
using namespace std;
int main()
{
	int x;
	while(1){
		cin>>x;
		if (x==42)break;
		cout<<x<<endl;
	}
	return 0;
}
