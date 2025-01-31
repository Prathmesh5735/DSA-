#include<iostream>
using namespace std;

int main(){

    int a = 10, b = 20, temp;
    cout<<"Before Swapping: a = "<<a<<" b = "<<b<<endl;

    temp = a;
    a = b;
    b = temp;
    return 0;
}