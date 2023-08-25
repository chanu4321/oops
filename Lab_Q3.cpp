// swap two  numbers

#include <iostream>
using namespace std;
                   
int main() {
    int a,b,temp;
    cout<<"enter element a: "<< endl;
    cin>>a;
    cout<<"enter element b: "<< endl;
    cin>>b;
    cout<<"Entered nos. " << a << " " << b << endl;
    temp=a;
    a=b;
    b=temp;
    cout<< "After swapping: " << a << " " << b << endl;
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
       
int main() {
    int a,b;
    cout<<"enter element a: "<< endl;
    cin>>a;
    cout<<"enter element b: "<< endl;
    cin>>b;
    cout<<"Entered nos. " << a << " " << b << endl;
    swap(a,b);
    cout<< "After swapping: " << a << " " << b << endl;
    return 0;
}