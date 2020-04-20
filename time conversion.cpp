//12 to 24 hrs clock
#include<iostream>
using namespace std;
int main(){
	int n,h,m,s;
	cout<<"Press 1 for AM or 2 for PM"<<endl;
	cin>>n;
	if (n==1){
		cout<<"Enter the hour,minute and seconds in AM"<<endl;
		cin>>h>>m>>s;
		if(h>12){
			cout<<"Invalid"<<endl;
		}
		if(m>60){
			int n=m/60;
			h=h+n;
			m=m-60*n;
		}
		if(s>60){
			int t=s/60;
			m=m+t;
			s=s-60*t;
		}
		cout<<"Time in 24hrs is "<<h<<":"<<m<<":"<<s;
	}
	if(n==2){
		cout<<"Enter the hour,minute and seconds in PM"<<endl;
		cin>>h>>m>>s;
		if(h>12){
			cout<<"Invalid"<<endl;
		}
		if(m>60){
			int n=m/60;
			h=h+n;
			m=m-60*n;
		}
		if(s>60){
			int t=s/60;
			m=m+t;
			s=s-60*t;
		}
		cout<<"Time in 24hrs is "<<h+12<<":"<<m<<":"<<s;
	}
	else if(n!=1 && n!=2){
	cout<<"Invalid Input";
	}
	return 0;	
}
