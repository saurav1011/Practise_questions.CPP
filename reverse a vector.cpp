//reverse the element of array
#include<iostream>
#include<vector>
using namespace std;
reverseArray(vector<int> &A){
	int n=A.size();
	for(int i=0;i<n;i++){
		A.push_back(A[n-i-1]);
	}
	return A;
}
int main(){
	vector<int>B;
	cin>>B;
	cout<<reverseArray(vector<int>&B)<<endl;
	return 0;
	
}
