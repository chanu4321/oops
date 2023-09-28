#include <iostream>
using namespace std;
class Test
{
private:
   int x;
public:
   void setX (int x)
   {
       this->x = x;
   }
   void print() { cout << "x = " << x << endl; }
};                   
int main() {
    
    cout << "Chaitanya Gupta" << endl;
    cout << "A2305222276" << endl;
    Test obj;
    int x = 20;
    obj.setX(x);
    obj.print();
    return 0;
}