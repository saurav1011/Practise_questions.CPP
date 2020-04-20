//O(nlogn) solution
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	int l, m;
	cin>>l;
	vector<int> A;
	
	for(int i=0;i<l;i++)
	{
		int k;
		cin>>k;
		A.push_back(k);
	}
	cin>>m;
	sort(A.begin(),A.end());
	if(l%2==0)
	{
		for(int i=l/2-1,j=l/2;i>=0,j<=l-1;)
		{
			if(A[i]*A[j]==m)
			{
				cout<<A[i]<<" "<<A[j]<<endl;
				break;
			}
			if(A[i]*A[j]<m)
			{
				j++;
			}
			if(A[i]*A[j]>m)
			{
				i--;
			}
		}
	}
	else
	{
		for(int i=l/2,j=l/2+1;i>=0,j<=l-1;)
		{
			if(A[i]*A[j]==m)
			{
				cout<<A[i]<<" "<<A[j]<<endl;
				break;
			}
			if(A[i]*A[j]<m)
			{
				j++;
			}
			if(A[i]*A[j]>m)
			{
				i--;
			}
		}
	}
	return 0;
}

