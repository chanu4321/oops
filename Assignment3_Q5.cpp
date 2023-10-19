#include <iostream>
using namespace std;

class Student {
    string name;
    int age;
    string address;
    public:
    Student (string name = "unknown",int age = 0, string address = "not available"){
        this->name=name;
        this->age=age;
        this->address=address;
    }

    void setInfo(string name,int age){
        this->name=name;
        this->age=age;
    }

    void setInfo(string name,int age,string address){
        this->name=name;
        this->age=age;
        this->address=address;
    }

    void getInfo(){
        cout << name << " " << age << " " << address << endl;
        cout << endl;
    }
};
int main() {
    Student s[10];
        s[0].setInfo("mudit",10);
        s[1].setInfo("a",11);
        s[2].setInfo("b",12);
        s[3].setInfo("c",13);
        s[4].setInfo("d",14);
        s[5].setInfo("e",15,"x");
        s[6].setInfo("f",16,"y");
        s[7].setInfo("g",17,"z");
        s[8].setInfo("h",18,"w");
        s[9].setInfo("i",19,"u");
        
    for(int i=0;i<10;i++){
        s[i].getInfo();
    }
    cout << "Chaitanya Gupta" << endl;
    cout << "A2305222276" << endl;
    return 0;
}