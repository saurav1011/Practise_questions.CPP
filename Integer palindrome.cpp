#include<iostream>
#include<string>
using namespace std;

isPalindrome(int A) {
    string s= to_string(A);
    int count=0;
    for(int i=0;i<=(A-1)/2;i++){
        if (s[i]==s[A-i])
        count++;
    }
    if (count==(A+1)/2)
    return 1;
    else return 0;
}

int main(){
	int A
	cout<<"enter the digit"<<endl;
	cin>>A;
	cout<<isPalindrome(A);
}
