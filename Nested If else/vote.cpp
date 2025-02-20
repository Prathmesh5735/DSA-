#include<iostream>
using namespace std;

int main()
{
	int age;
	cout <<"Enter Your age =>";
	
	cin>>age;
	
	if(age>=18){
		if(age>100){
			cout <<"Please Enter Vilid Age !!";
		}
		else
		{
			cout <<"You Are Elegible For Vote";
		}
	}
	else
	{
		if(age<=0){
			if(age==0){
				cout <<"Zero Is Not Allow As Age !!";
			}
			else
			{
				cout <<"Negative  Number Age is Not Allow";	
			}
		}	
		else
		{
			cout <<"You Are Not Allow To Vote !!";
		}
	}
	
	return 0;
}