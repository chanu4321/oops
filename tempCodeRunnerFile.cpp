#include <iostream>
using namespace std;
void fun () {
    class test {
        public:
        void meth();
    };
}

void test :: meth() {

}

int main()
{
    fun();
    cout<<"Hello World";

    return 0;
}