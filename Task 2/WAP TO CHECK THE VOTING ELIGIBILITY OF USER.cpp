#include<iostream>
using namespace std;

int main(){
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if(age == 0 || age < 0 || age > 100){
        cout << "Invalid age";
    }else if(age < 18){
        cout << "You are not elligible for voting";
    }else if(age >= 18){
        cout << "You are elligible for voting";
    }

    return 0;
}