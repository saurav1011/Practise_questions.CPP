#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
bool pal(string s,int i,int j)
{

    while(i<j || i!=j)
    {
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }

    return true;
}
int check(string S)
{
    int n=S.length();
    int maxl=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (pal(S,i,j)==true)
            {
                
                maxl=max(maxl,j-i+1);
            }
        }
        
    }
    return maxl;
}
int main()
{
    int n;
    cin>>n;
    string S="";
    for(int i=0;i<n;i++)
    {
        char a;
        cin>>a;
        S=S+a;
    }
    cout<<check(S)<<endl;
    return 0;
    
}

