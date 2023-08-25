#include<iostream>
using namespace std;
 int main()
 {
     int n,large ;
     cout<<"enter the no of elements"<<endl;
     cin>>n;
     int a[n];
     cout<<"enter the terms"<<endl;
     for (int i=0;i<n;i++)
     {
        cin>>a[i];
     }
     large=a[0];
     for(int i=1;i<n;i++)
     {
         if(a[i]>large){
            large=a[i];
         }
     }
    cout<<"the largest element is "<< large;
    return 0;
 }