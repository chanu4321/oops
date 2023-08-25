// decimal to binary
#include <iostream>
using namespace std;
                   
int main() {
    int a,b[8],i=0;
    cout << "enter decimal no. " << endl;
    cin >> a ;
    while(a>0){
        b[i] = a % 2;
        a = a / 2;
        i++;
    }
    for (int j = i-1; j >= 0; j--){
        cout << b[j];
    }
    return 0;
}