#include<bits/stdc++.h>
#include<cmath>
int maximum(int a, int b, int c) 
{ 
   return max(max(a, b), c); 
}
int minimum(int a, int b, int c) 
{ 
   return min(min(a, b), c); 
}
int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    int i=0;
    int j=0;
    int k=0;
    int dmin=INT_MAX;
    while(i<A.size() && j<B.size() && k<C.size())
    {
        int max=maximum(A[i],B[j],C[k]);
        int min=minimum(A[i],B[j],C[k]);
        if (min == A[i]) 
            i++; 
        else if (min == B[j]) 
            j++; 
        else
            k++;        
        int d=(max-min);
        if(dmin>d)
        {
            dmin=d;
        }
    }
    return dmin;
}

