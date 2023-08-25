#include <iostream>
using namespace std;

class Employee
{
public:
    int eid;
    int getid()
    {
        cout << "eid: " << eid << endl;
    }
    int putid()
    {
        cout << "enter eid: " << endl;
        int eid;
        cin >> eid;
        this->eid = eid;
    }
};

class Data : virtual public Employee
{
public:
    string ename;
    string address;
    int age;

    void getdata()
    {
        cout << "ename: " << ename << endl;
        cout << "address: " << address << endl;
        cout << "age: " << age << endl;
    }

    void putdata()
    {
        cout << "enter ename: " << endl;
        string ename;
        cin >> ename;
        this->ename = ename;
        cout << "enter address: " << endl;
        string address;
        cin >> address;
        this->address = address;
        cout << "enter age: " << endl;
        int age;
        cin >> age;
        this->age = age;
    }
};

class Salary : virtual public Employee
{
public:
    float BS;

    float getsal()
    {
        cout << "Base Salary : " << BS << endl;
    }

    float putsal()
    {
        cout << "enter Base Salary : " << endl;
        int BS;
        cin >> BS;
        this->BS = BS;
    }
};

class GrossSalary : public Data, public Salary
{
    int HRA;
    int DA;
    int GS;

public:
    void gross()
    {
        if (BS < 20000)
        {
            this->HRA = (15 * BS) / 100;
            this->DA = (10 * BS) / 100;
        }
        else if (BS >= 20000 && BS < 30000)
        {
            this->HRA = (20 * BS) / 100;
            this->DA = (15 * BS) / 100;
        }
        else
        {
            this->HRA = (25 * BS) / 100;
            this->DA = (20 * BS) / 100;
        }
        cout << HRA << endl;
        cout << DA << endl;

        GS = BS + HRA + DA;

        cout << "Gross Salary is: " << GS << endl;
    }
};
int main()
{
    GrossSalary g1;
    g1.putid();
    g1.putdata();
    g1.putsal();

    g1.getid();
    g1.getdata();
    g1.getsal();

    g1.gross();

    return 0;
}