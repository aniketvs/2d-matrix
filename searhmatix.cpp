#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int a[n][m];
    cout<<"enyter a matix element";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
         cin>>a[i][j];
        }
        
    }
    cout<<"enter a target element";
     int t,f=0;
     cin>>t;
     int r=0,c=m-1;
     while (r<=n-1 && c>=0)
     {
        if (a[r][c]==t)
        {
          cout<<"find";
        }
       if (a[r][c]<t)
        {
           r++;
        }
        else{
            c--;
        }
        
     }
    //  if (f=1)
    //  {
    //     cout<<"successfull";
    //  }
    // else{
    //     cout<<"failed";
    // }
    
}