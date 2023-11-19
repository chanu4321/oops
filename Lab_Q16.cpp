/*#include <iostream>
#include <cstring>
using namespace std;
class Person
{
private:
    char name[64];
    int age;
    char address[64];
    double totalSalary;

public:
    Person() : age(0), totalSalary(0.0)
    {
        name[0] = '\0';
        address[0] = '\0';
    }
    void setData()
    {
        cout << "Enter name: ";
        cin.ignore();
        cin.getline(name, sizeof(name));
        cout << "Enter age: ";
        cin >> age;
        cin.ignore();
        cout << "Enter address: ";
        cin.getline(address, sizeof(address));
        cout << "Enter total salary: ";
        cin >> totalSalary;
    }
    int getAge() const
    {
        return age;
    }
};
inline int findYoungestAge(const Person *people, int size)
{
    int youngest = people[0].getAge();
    for (int i = 1; i < size; ++i)
    {
        if (people[i].getAge() < youngest)
        {
            youngest = people[i].getAge();
        }
    }
    return youngest;
}
inline int findEldestAge(const Person *people, int size)
{
    int eldest = people[0].getAge();
    for (int i = 1; i < size; ++i)
    {
        if (people[i].getAge() > eldest)
        {
            eldest = people[i].getAge();
        }
    }
    return eldest;
}
int main()
{
    Person people[10];
    int n;
    cout << "Chaitanya Gupta" << endl;
    cout << "A2305222276" << endl;
    cout << "Enter the number of people whose details is to be filled:";
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cout << "Person " << i + 1 << ":" << endl;
        people[i].setData();
        cout << endl;
    }
    int youngestAge = findYoungestAge(people, n);
    int eldestAge = findEldestAge(people, n);
    cout << "Youngest age: " << youngestAge << endl;
    cout << "Eldest age: " << eldestAge << endl;
    return 0;
}
*/
#include <iostream>
#include <cstring>
using namespace std;
class Person
{
private:
    char name[64];
    int age;
    char address[64];
    double totalSalary;

public:
    Person() : age(0), totalSalary(0.0)
    {
        name[0] = '\0';
        address[0] = '\0';
    }
    Person(const char *n, int a, const char *addr, double salary) : age(a),
                                                                    totalSalary(salary)
    {
        strncpy(name, n, sizeof(name));
        name[sizeof(name) - 1] = '\0';
        strncpy(address, addr, sizeof(address));
        address[sizeof(address) - 1] = '\0';
    }
    double getBasicSalary() const
    {
        return totalSalary * 0.6;
    }
    double getAllowances() const
    {
        return totalSalary * 0.2;
    }
    double getDeductions() const
    {
        return totalSalary * 0.1;
    }
    void displaySalarySlip() const
    {
        cout << "Salary Slip for " << name << endl;
        cout << "----------------------------------" << endl;
        cout << "Basic Salary: " << getBasicSalary() << endl;
        cout << "Allowances: " << getAllowances() << endl;
        cout << "Deductions: " << getDeductions() << endl;
        cout << "Net Salary: " << totalSalary << endl;
        cout << "----------------------------------" << endl;
    }
};
int main()
{
    Person people[3];
    cout << "Chaitanya Gupta" << endl;
    cout << "A2305222276" << endl;
    cout << "Enter the number of people whose details is to be filled:";
    for (int i = 0; i < 3; ++i)
    {
        cout << "Person " << i + 1 << ":\n";
        char name[64];
        int age;
        char address[64];
        double totalSalary;
        cout << "Enter name: ";
        cin.ignore();
        cin.getline(name, sizeof(name));
        cout << "Enter age: ";
        cin >> age;
        cin.ignore();
        cout << "Enter address: ";
        cin.getline(address, sizeof(address));
        cout << "Enter total salary: ";
        cin >> totalSalary;
        people[i] = Person(name, age, address, totalSalary);
        cout << endl;
    }
    for (const Person &person : people)
    {
        person.displaySalarySlip();
        cout << endl;
    }
    return 0;
}
