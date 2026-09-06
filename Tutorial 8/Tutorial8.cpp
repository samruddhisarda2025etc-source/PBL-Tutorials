#include <iostream>
using namespace std;

class BasicInfo
{
protected:
    int id;
    string name;

public:
    void acceptBasicInfo()
    {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Employee Name: ";
        cin >> name;
    }
};

class DepartmentInfo
{
protected:
    string department;
    string designation;

public:
    void acceptDepartmentInfo()
    {
        cout << "Enter Department: ";
        cin >> department;

        cout << "Enter Designation: ";
        cin >> designation;
    }
};

class Employee : public BasicInfo, public DepartmentInfo
{
public:
    void accept()
    {
        acceptBasicInfo();
        acceptDepartmentInfo();
    }
    void display()
    {
        cout << "\n--- Employee Information ---" << endl;
        cout << "Employee ID   : " << id << endl;
        cout << "Employee Name : " << name << endl;
        cout << "Department    : " << department << endl;
        cout << "Designation   : " << designation << endl;
    }
};
int main()
{
    Employee e;

    e.accept();
    e.display();
    return 0;
}
