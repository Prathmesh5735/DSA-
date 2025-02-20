#include<iostream>
using namespace std;

int main(){
	
	
	int n;
	int i=1;
	
	cout << "Enter Your Number of n: ";
	cin >>n;
	
	while(n>=i){
		if(i%2==0){
			cout << i <<endl;
		}
		i++;
	}
	return 0;
}