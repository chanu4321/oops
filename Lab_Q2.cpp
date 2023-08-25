// factorial
#include <iostream>
using namespace std;
long fact(int n, long f){
    if(n==1) return f;
    f= n * fact(n-1,f);
}           
int main() {
/*   int a;
   int fact = 1;
   cout<<"enter no. :" << endl;
   cin>>a;
   if(a==0){
    cout<<"invalid"<< endl;
   }
   else if(a==1){
    cout<<"factorial is: " << fact << endl;
   }
   else {
    for(int i=1;i<=a;i++){
        fact=i*fact;
    }
    cout<<"factorial is " << fact << endl;
   }
*/
   cout<<fact(5,1);
   return 0;
}