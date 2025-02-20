#include<iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cout << "Enter Value Of a => ";
    cin >> a;
    cout << "Enter Value Of b => ";
    cin >> b;
    cout << "Enter Value Of c => ";
    cin >> c;
    cout << "Enter Value Of d => ";
    cin >> d;

    if (a > b) {
        if (a > c) {
            if (a > d) {
                cout << "A Is Max";
            } else {
                cout << "D Is Max";
            }
        } else {
            if (c > d) {
                cout << "C Is Max";
            } else {
                cout << "D Is Max";
            }
        }
    } else {
        if (b > c) {
            if (b > d) {
                cout << "B Is Max";
            } else {
                cout << "D Is Max";
            }
        } else {
            if (c > d) {
                cout << "C Is Max";
            } else {
                cout << "D Is Max";
            }
        }
    }

    return 0;
}