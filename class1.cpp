#include<iostream>
using namespace std;
class student
{
	private:
		int roll;
		char name[40];
	public:
		void setdata(int roll,char* namep);
		
		void outdata()
		{cout<<"roll no. is"<<roll<<endl;
		cout<<"name is:"<<name<<endl;
	};
};

int main()
{
	student s1,s2;
	s1.setdata(10,"ravi");
	s2.setdata(21,"eminem");
	cout<<"student details are:"<<endl;
	s1.outdata();
	s2.outdata();
}
