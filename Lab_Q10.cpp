#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

void swap(float &a, float &b) {
    float temp = a;
    a = b;
    b = temp;
}

int main() {
    int int1 = 5, int2 = 10;
    char char1 = 'A', char2 = 'B';
    float float1 = 3.14, float2 = 2.71;

    cout << "Before swapping integers: int1 = " << int1 << ", int2 = " << int2 << std::endl;
    swap(int1, int2);
    cout << "After swapping integers: int1 = " << int1 << ", int2 = " << int2 << std::endl;

    cout << "Before swapping characters: char1 = " << char1 << ", char2 = " << char2 << std::endl;
    swap(char1, char2);
    cout << "After swapping characters: char1 = " << char1 << ", char2 = " << char2 << std::endl;

    cout << "Before swapping floats: float1 = " << float1 << ", float2 = " << float2 << std::endl;
    swap(float1, float2);
    cout << "After swapping floats: float1 = " << float1 << ", float2 = " << float2 << std::endl;

    return 0;
}
