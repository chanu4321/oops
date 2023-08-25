// largest of 3 numbers 
#include <iostream>
using namespace std;
                   
int main() {
    int a,b,c;
    cout<<"enter element a: "<< endl;
    cin>>a;
    cout<<"enter element b: "<< endl;
    cin>>b;
    cout<<"enter element c: "<< endl;
    cin>>c;

/*    if(a>b) {
        if(a>c){
            cout<<"a is largest " << endl;
        }
        else {
            cout<<"c is largest " << endl;
        }
    }
    else{
        if(b>c){
            cout<<"b is largest " << endl;
        }
        else {
            cout<<"c is largest " << endl;
        }
    }
*/  


    a>b ? (a>c? cout<<"a is largest " : cout<<"c is largest ") : b>c ? (b>a? cout<<"b is largest " : cout<<"c is largest ") : cout<<"c is largest "  << endl;
    return 0;
}