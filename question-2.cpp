//write the program for largest of 3 numbers 

#include <iostream>
using namespace std;
int main() {
    int a, b,c;
    cin >> a; 
    cin >> b;
    cin >> c;
    
    if ( a == b) {
        if ( a > c) {
            cout << "Two numbers are equally the largest" << endl;
        }
        else {
            cout << "The largest number is " << c << endl;
        }
    }
    else if (b == c) {
        if (b > a) {
            cout << "Two numbers are equally the largest" << endl;
        }
        else {
            cout << "The largest number is " << a << endl;
        }
    }
    else if ( a == c) {
        if (a > b) {
            cout << "Two numbers are equally the largest" << endl;
        }
        else {
            cout << "The largest number is " << endl;
        }
    }
    else if (a > b) {
        if (a > c) {
            cout << "The largest Number is " << a << endl;
        }
        else {
            cout << "The largest Number is " << c << endl;
        }
    }
    else if (b > a) {
        if (b > c) {
            cout << "The largest Number is " << b << endl;
        }
        else {
            cout << c << " is the largest";
        }
    }
    else if (c > a) {
        if (c > b) {
            cout << "The largest number is " << c << endl;
        }
         else {
            cout << b << " is the largest";
         }
    }
    else {
        cout << "All numbers are Equal";
    }

}