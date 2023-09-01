#include <iostream>
using namespace std;
class Student {
    int rollno;
    string name;
    int marks[6];
    int sum=0;
    public:
    Student (int,string,int m[6]);
    void display();
    
};
Student::Student (int rollno,string name,int marks[6]) {
        this->rollno=rollno;
        this->name=name;
        for (int i=0;i<6;i++) {
            cout << "enter marks for subject " << i+1 << endl;
            this->marks[i]=marks[i];
            sum+=marks[i];
        }
    }
void Student :: display(){
        cout << "roll no. is " << rollno << endl;
        cout << "name is " << name << endl;
        for(int i=0;i<6;i++){
            cout << "marks for subject " << i+1 << " " << marks[i] << endl;
        }

    }


int main() {
    int a[6]={10,20,30,40,50,60};
    Student s1(1,"chaitanya",a);
    s1.display();

    Student s2(2,"aakash",a);
    s2.display();

    Student s3(3,"yash",a);
    s3.display();
    
    Student s4(4,"madhav",a);
    s4.display();

    Student s5(5,"naman",a);
    s5.display();

    return 0;
}