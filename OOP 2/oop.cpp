#include<iostream>
using namespace std;

class Sport{
	private :
	int age;
	string name,gameName,role;
	
	
	public:
	void input(int age, string name,string gameName, string role)
	{
		this->age=age;
		this->name=name;
		this->gameName=gameName;
		this->role=role;
	}
	void output()
	{
		cout << "Name: "<< name << endl;
		cout << "Age: "<< age << endl;
		cout << "Game Name: "<< gameName << endl;
		cout << "Role: "<< role << endl <<endl;
		
	}
	
};

int main()
{
	int a=10;
	Sport p1,p2,p3;
	
	p1.input(18,"Pintya","Cricket","Blower");
	p1.output();
	
	p2.input(20,"Chintya","Cricket","keeper");
	p2.output();
	p3.input(18,"Bittya","Cricket","Better");
	p3.output();
	
	return 0;
}
	