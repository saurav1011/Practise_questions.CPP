
#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(A[i]%2!=0)
        {
            int a=A[i]-(A[i]%2);
            sum=sum+a/2;
        }
        else
        sum=sum+A[i]/2;
        
    }
    cout<<sum<<endl;
    return 0;
}

