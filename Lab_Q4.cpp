#include <iostream>
using namespace std;
                   
int main() {
    int a,p=0;
    cout<<"enter no. " << endl;
    cin >> a ;
    for(int i=1;i<=a;i++){
        if(a%i==0 && a%1==0){
            p++;
        }
    }
    if (p==2){
        cout << "prime no. " << endl;
    }
    else {
        cout << "not a prime no. " << endl;
    }
    return 0;
}