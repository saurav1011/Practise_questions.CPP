#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int i,A;
 cout<<"enter the number to be checked"<<endl;
 cin>>A;
     if (A<=1)
    cout<<"False";
    for (int i=2;i<sqrt(A-1);i++){
        if (A%i==0){
        cout<<"False";
        break;
    }
        else cout<<"True";
        break;
    }
       
}
