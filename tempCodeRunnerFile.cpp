#include<iostream>
using namespace std;

class student{
    protected:
        int roll;
        string name;
    public:
        student();
};

class exam: public student{
    protected:
        int science;
        int math;
    public:
        exam();
};

class result: public exam{
    protected:
        int total;
    public:
        void display(){
            cout<<"Enter Student name: \n";
            cin>>name;
            cout<<"Enter Roll: \n";
            cin>>roll;
            cout<<"Enter Science Marks: \n";
            cin>>science;
            cout<<"Enter Math Marks: \n";
            cin>>math;
            total=science+math;
            cout<<name<<endl<<roll<<total;
        }
};

int main(){
    result r1;
    r1.display();
    return 0;
}