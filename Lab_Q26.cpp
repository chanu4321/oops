#include <iostream>
using namespace std;
class arr {
    public:
    int a[5]={1,2,3,4,5};
    
    void operator ++(int) {
        for(int i=0;i<5;i++){
            a[i]=a[i] + 1;
        }
    }
    void print() {
        for(int i=0;i<5;i++){
            cout << a[i] << endl;
        }
    }
};
int main()
{
    arr a;
    a++;
    a.print();
    return 0;
}