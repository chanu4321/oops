/* 
#include <iostream>
using namespace std;
                   
int main() {
    char name[6];
    char x;
    for(int i=0;i<6;i++) {
        cin >> x;
        name[i]=x;
    }
    int pntr1=5;
    int pntr2=0;
    char temp;
    while(pntr1>pntr2){
        temp=name[pntr2];
        name[pntr2]=name[pntr1];
        name[pntr1]=temp;
        pntr2++;
        pntr1--;
    }

    for (int i = 0; i < 6; i++)
    cout << name[i] << " ";
    return 0;
    }
*/

#include <iostream>
using namespace std;

bool chck(char *name, int length){
    for(int i=0;i<length/2;i++){
        if(name[i]!=name[length-i-1]) return 0;
    }
    return 1;
}
       
int main() {
    int n;
    cin>>n;
    char name[n];
    for(int i=0;i<n;i++){
        cin>>name[i];
    }
    cout<<chck(name,n);
    return 0;
}
