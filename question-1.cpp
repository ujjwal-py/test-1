//Write a program to in cpp to reverse a given int

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, t, rev = 0, digit;
    cout << "Enter a Number to Reverse - " << endl;
    cin >> n;
    t = n;
    while (t > 0) {
        digit = t % 10;
        rev = (rev * 10) + digit;
        t = t/10;
    }
    cout << "Reverse is - " << rev << endl;

}
