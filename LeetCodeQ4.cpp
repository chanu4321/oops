#include <iostream>
using namespace std;
int main()
{

    int x=123454321;

    if (x < 0)
    {
        return false;
    }
    int reverse = 0;
    int temp = x;
    while (temp != 0)
    {
        int digit = temp % 10;
        reverse = (1LL * reverse * 10) + digit;
        cout << reverse << endl;
        temp = temp / 10;
    }
    cout << (reverse == x);

}
