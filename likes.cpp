#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    string saurav;
    cout<<"what are the things which you like?"<<endl;
    getline(cin,saurav);
    n=saurav.length();
    cout<<"the number of letters in your answer is(incuding spacebars):"<<n<<endl;
    return 0;

}
