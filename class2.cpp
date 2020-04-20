#include<iostream>
using namespace std;
class distance
{
	private:
		int feet;
		float inches;
	public:
		void setdata(int feet,float inches);
	
	    void getdata()
	    {
	    	cout<<"enter distance in feet:"<<endl;  cin>>feet;
	    	cout<<"enter distance in inches:"<<endl; cin>>inches;
	    	
		}
	    void showdata()
	    {
	    	cout<<"distance in feet is :"<<feet;
	    	cout<<"distance in inches is :"<<inches;
		}
};

int main()
{
distance d1,d2;
d1.setdata(11,13.32)
d2.getdata()
cout<<"the distance d1 is:";
d1.showdata()
cout<<"the distance d2 is:";
d2.showdata()
}
}
