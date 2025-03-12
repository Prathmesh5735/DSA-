#include<iostream>
using namespace std;

class School{
    string name,address,medium;

    public :

    void set(string name, string address, string medium){
        this->name = name;
        this->address = address;
        this->medium = medium;
    }

    void get(){
        cout << "School Name: " << this->name << endl;
        cout << "School Address: " << this->address << endl;
        cout << "School Medium: " << this->medium << endl;
    }
};

class Trustee {
    string name,authority;
    
    public : 
    void set(string name, string authority){
        this->name = name;
        this->authority = authority;
    }
    void get(){
        cout << "Trustee Name: " << this->name << endl;
        cout << "Trustee Authority: " << this->authority << endl;
    }
};

class Principal {
    string name, authority, medium;

    public : 
    void set(string name, string authority, string medium){
        this->name = name;
        this->authority = authority;
        this->medium = medium;
    }

    void get(){
        cout << "Principal Name: " << this->name << endl;
        cout << "Principal Authority: " << this->authority << endl;
        cout << "Principal Medium: " << this->medium << endl;
    }
};

class Monitor{
    string name, authority;

    public :
    void set(string name, string authority){
        this->name = name;
        this->authority = authority;
    }

    void get(){
        cout << "Monitor Name: " << this->name << endl;
        cout << "Monitor Authority: " << this->authority << endl;
    }


};

class Student{
    int age;
    string name, medium;

    public :
    void set(string name, int age, string medium){
        this->name = name;
        this->age = age;
        this->medium = medium;
    }

    void get(){
        cout << "Student Name: " << this->name << endl;
        cout << "Student Age: " << this->age << endl;
        cout << "Student Medium: " << this->medium << endl;
    }
};

int main(){

    School s1;
    s1.set("N.H Ranka","Bodwad-425310","hindi , Marathi , English");
	s1.get();
	
	Trustee t1;
	t1.set("Ajay Badgujar","Princpal To Student's");
	t1.get();
	
	Principal p1;
	p1.set("Sanjay Devkar","Teacher To Student's","Marathi");
	p1.get();
	
	Monitor m1;
	m1.set("Prajwal","Student's");
	m1.get();
	
	Student st1;
	st1.set("Kalpesh",15,"Marathi");
	st1.get();
	
	return 0;
    
}