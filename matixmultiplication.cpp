#include<iostream>
using namespace std;
int main(){
    int n,o,m;
    cin>>n;
    cin>>o;
    cin>>m;
    int a[n][o];
    int b[o][m];
    cout<<"enter 1st matrix"<<endl;
    for (int i = 0; i < n; i++)
    {
       for (int  j = 0; j < o; j++)
       {
         cin>>a[i][j];
       }
       
    }
    cout<<"enter a 2nd matix"<<endl;
      for (int i = 0; i < o; i++)
    {
       for (int  j = 0; j < m; j++)
       {
         cin>>b[i][j];
       }
       
    }
    int store;
    int c[n][m];
    cout<<"matrix multiplication is given below"<<endl;
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {int s=0;
           for (int k = 0; k< o; k++)
           {
              store=a[i][k]*b[k][j];
              s=s+store;
               
           }
           c[i][j]=s;
           
       }
       
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           cout<<c[i][j]<<"  ";
        }
        cout<<endl;
    }
    
}