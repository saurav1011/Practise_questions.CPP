#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	string a;
	string b;
	string c;
	for(int i=0;i<t;i++)
	{
		
		cin>>a;
		cin>>b;
		cin>>c;
		if(a.size()!=b.size() || a.size()!=c.size() || b.size()!=c.size())
		{
			return -1;
		}
		
	}
	
	for(int i=0;i<t;i++)
	{
		int count=0;		
		for(int j=0;j<c.size();j++)
		{
			if(a[j]==c[j])
			{
				swap(b[j],c[j]);
				count++;
			}
			else if(b[j]==c[j])
			{
				swap(a[j],c[j]);
				count++;
			}
			else break;
		}
		if(count==c.size())
		{
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
	return 0;
}
