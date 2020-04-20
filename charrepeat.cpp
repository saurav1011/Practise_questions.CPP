#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s, t;
        cin>>s>>t;
        vector<pair<char,int> > temp1;
        vector<pair<char, int> > temp2; 
        char last;
        temp1.push_back(make_pair(s[0],1) );
        temp2.push_back(make_pair(t[0],1) );
        last = s[0];
        int p =0;
        for(int i=1; i<s.length(); i++)
        {
            if(last==s[i])
                temp1[p].second++;
            else
            {
                temp1.push_back(make_pair(s[i], 1));
                last = s[i];
                p++;
            }
        }
        last = t[0];
        int q =0;
        for(int i=1; i<t.length(); i++)
        {
            if(last==t[i])
                temp2[q].second++;
            else
            {
                temp2.push_back(make_pair(t[i], 1));
                last = t[i];
                q++;
            }
        }
        int k=0;
        if(temp1.size()!=temp2.size())
            {
                cout<<"NO"<<endl;
                continue;
            }
        else
        {
            for(int i=0; i<temp1.size(); i++)
            {
                if(temp1[i].first== temp2[i].first && temp1[i].second<=temp2[i].second)
                    k++;
            }
        }
        if(k==temp1.size())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
