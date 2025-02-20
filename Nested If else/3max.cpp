#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout <<"Enter Vlaue Of a =>";
	cin>>a;
	cout <<"Enter Value Of b =>";
	cin>>b;
	cout <<"Enter Value Of c =>";
	cin>>c;
	
	
	if(a>b){
		if(a>c){
			cout <<"A Is Max";
		}
		else
		{
			cout <<"C Is Max";
		}
	}
	else
	{
		if(b>c){
			cout <<"B Is Max";
		}	
		else
		{
			cout <<"C Is Max";
		}
	}
	
	return 0;
}