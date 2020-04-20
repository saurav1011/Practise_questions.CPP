//program to find LCM
#include <iostream>
using namespace std;
/*lcm(int a,int b){
	while(b!=0){
		int r=a%b;
		int s=a/r;
		int t=b/r;
		return r*s*t;
	}

}
*/	
int main(){
	int a,b,c;
	cin>>a;
	cin>>b;
	for(int i=2;i<=a && i<=b;i++){
		if (i%a==0 && i&b==0)
		cout<<i;
	}

}
