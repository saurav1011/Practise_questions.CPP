#include <iostream>
#include <string>
#include <vector>
#include <cmath>>
using namespace std;

int main()
{      int A;
       cin>>A;
    vector<vector<int>> v;
    for(int i=0;i<A;i++)
    {     int res=pow(11,i);
            int rem=0;
            int j=0;
          do
          {   
              rem = res%10;
              v[i][j]=rem;
                res=res/10;
              j++;
          }while(res!=0);
    } 
     for (int i = 0; i < v.size(); i++) { 
        for (int j = 0; j < v[i].size(); j++) 
            cout << v[i][j] << " "; 
        cout << endl; 
        }
}           
     
