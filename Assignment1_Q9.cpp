#include <iostream>
using namespace std;

inline string capitalize() {
    string word;
    cout << "enter string: " << endl;
    cin >> word;
    if (islower(word[0])) {
        word[0]=toupper(word[0]);
    }
    return word;
}
                   
int main() {
    cout<< capitalize() << endl;
    return 0;
}