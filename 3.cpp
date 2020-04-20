//Given a sequence of 2*k characters, please print every second character from the first half of the sequence. Start printing with the first character.

//Input
//In the first line of input your are given the positive integer t (1<=t<=100) - the number of test cases. In the each of the next t lines, you are given a sequence of 2*k (1<=k<=100) characters.

//Output
//For each of the test cases please please print every second character from the first half of a given sequence (the first character should appear).

#include<iostream>
using namespace std;
int main(){
	int n,k,i=0;
	cin >> n;
	while(n--){
	string s;
	cin >> s;
	k=s.length()/2;
	while(i<k){
	cout << s[i];
	i=i+2;
	}
	cout << endl;
	i=0;
}
return 0;
}

