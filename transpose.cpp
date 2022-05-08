#include<iostream>
using namespace std;

int main(){
    int m,n;
   cin>>m;
   cin>>n;
   int rs=0,re=m-1,cs=1,ce=n-1;
   int a[m][n];
   
   cout<<"enter a matix element";
   for (int i = 0; i < m; i++)
   {
    for (int j = 0; j < n; j++)
    {
        cin>>a[i][j];
    }
    
   }
   int temp;
   cout<<"your transpose element of matix are given below";

       for (int i = rs; i <= re; i++)
       {
           for (int j = cs; j <=ce; j++)
           {
               temp=a[i][j];
               a[i][j]=a[j][i];
               a[j][i]=temp;
           }
           cs++;
       }
       for (int i = 0; i < m; i++)
       {
          for (int j = 0; j < n; j++)
          {
            cout<<a[i][j]<<" ";
          }
          cout<<endl;
       }
       
       
   
   
   

}