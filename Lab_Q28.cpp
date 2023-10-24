#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;
    string name;

public:
    Student () {}
    Student(int roll_no, string name)
    {
        this->roll_no = roll_no;
        this->name = name;
    }

    void get_details()
    {
        cout << "Roll No: " << roll_no << endl;
        cout << "Name: " << name << endl;
    }
};

class Test : virtual public Student
{
protected:
    int int_marks[5];

public:
    Test(int roll_no, string name, int int_marks[]) : Student(roll_no, name)
    {
        for (int i = 0; i < 5; i++)
        {
            this->int_marks[i] = int_marks[i];
        }
    }

    void get_int_marks()
    {
        cout << "Internal Marks: ";
        for (int i = 0; i < 5; i++)
        {
            cout << int_marks[i] << " ";
        }
        cout << endl;
    }

    int get_int_total()
    {
        int int_total = 0;
        for (int i = 0; i < 5; i++)
        {
            int_total += int_marks[i];
        }
        return int_total;
    }
};

class Sports : virtual public Student
{
protected:
    int sports_marks;

public:
    Sports(int roll_no, string name, int sports_marks) : Student(roll_no, name)
    {
        this->sports_marks = sports_marks;
    }

    void get_sports_marks()
    {
        cout << "Sports Marks: " << sports_marks << endl;
    }
};

class Result : public Test, public Sports
{
public:
    Result(int roll_no, string name, int int_marks[], int sports_marks) : Test(roll_no, name, int_marks), Sports(roll_no, name, sports_marks) {}

    void get_result()
    {
        cout << "Total Marks: " << get_int_total() + sports_marks << endl;
    }
};

int main()
{
    int roll_no;
    string name;
    int int_marks[5];
    int sports_marks;

    cout << "Enter roll no: ";
    cin >> roll_no;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter internal marks: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> int_marks[i];
    }
    cout << "Enter sports marks: ";
    cin >> sports_marks;

    Result result(roll_no, name, int_marks, sports_marks);
    result.get_result();
    cout << "Chaitanya Gupta" << endl;
    cout << "A2305222276" << endl; 
    return 0;
}