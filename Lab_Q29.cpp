#include <iostream>
#include <string>
using namespace std;
                   
int main() {
    cout << "Chaitanya Gupta" << endl;
    cout << "A2305222276" << endl; 
    string s1="Amity";
    string s2="University";
    string s3;
    s3=s1;
    string s4 = s2.substr(0, 4);
        
    cout << "s1 " << s1 << endl;
    cout << "s2 " << s2 << endl;
    cout << "s3 " << s3 << endl;
    cout << "s4 " << s4 << endl;
    if (s1.compare(s2)==-1) printf("s1 not equal s2");
    else printf("s1 equal s2");
    return 0;
}