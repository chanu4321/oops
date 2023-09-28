#include <iostream>
using namespace std;

class Person{

    public:

    char name[64];
    int age;
    char address[64];
    double salary;


    Person(){

    };

    Person(char n,int a,char add,double sal){
        for(int i=0;i<64;i++){
            name[i]= n;          
        }

        age= a;

        for(int i=0;i<64;i++){
            address[i]= add;
        }

        salary =sal;

    }


    void CreateObject(int objectnumber,Person object[]){

        char name1[64];
        int age1;
        char address1[64];
        double salary1;

            for(int i=0;i<objectnumber;i++){
                cout<<" Enter name: ";
                cin>>name1;

                cout<<" Enter age: ";
                cin>>age1;

                cout<<"Enter address: " ;
                cin>>address1;

                cout<<"Enter Salary: ";
                cin>>salary1;

                Person obj(name[64],age1,address[64],salary1);

                object[i]= obj;



    }

    }

   void DisplayObjects(Person object[], int size) {
        for (int i = 0; i < size; i++) {
            cout << "Name is: " << object->name[64] << endl;
            cout << "Age is: " << object->age << endl;
            cout << "Address is: " << object->address[64] << endl;
            cout << "Salary is: " << object->salary << endl;
            cout << endl;
        }
    }
};


int main(){

    Person Person1;
    Person PersonArray[10];
    Person1.CreateObject(1,PersonArray);
    Person1.DisplayObjects(PersonArray,1);
    return 0;
}