#include<iostream>
using namespace std;

class Employee{
    public :
    string name;
    int salary;
    int age;

};

int main(){
    Employee e1,e2,e3;
    e1.name = "Rahul";
    e1.salary = 9999;
    e1.age = 23;

    e2.name = "Rushya";
    e2.salary = 1010;
    e3.age = 22;

    e3.name = "none";
    e3.salary = 1;
    e3.age = 1;

    cout << "Name: " << e1.name << endl;
    cout << "Salary: " << e1.salary << endl;
    cout << "Age: " << e1.age << endl;

    cout << "Name: " << e2.name << endl;
    cout << "Salary: " << e2.salary << endl;
    cout << "Age: " << e2.age << endl;

    cout << "Name: " << e3.name << endl;
    cout << "Salary: " << e3.salary << endl;
    cout << "Age: " << e3.age << endl;

    return 0;
}