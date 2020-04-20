#include<iostream>
using namespace std;

class info
{
	private :
		char name[20];
		int roll;
    
	public:
		void setinfo()
		{cout<<"enter your name:"<<endl;
		cin>>name;
		cout<<"enter your roll number:"<<endl;
		cin>>roll;
		}
		void displayinfo()
		{cout<<"your name is :"<<name<<endl;
		cout<<"your roll no. is:"<<roll<<endl;
		}
};

int main()
{
	info s1,s2;
	s1.setinfo();
	s2.setinfo();
	cout<<"results are:"<<endl;
	s1.displayinfo();
	s2.displayinfo();
}
