//Write a program to in cpp to reverse a given int

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, t, rev = 0, digit;
    cout << "Enter a Number to Reverse - " << endl;
    cin >> n;
    int p;
    if (n > 9 && n < 100) p = 1;
    else if (n > 99 && n < 1000 ) p = 2;  
    t = n;
    while (t > 0) {
        digit = t % 10;
        rev = rev + (digit * pow(10, p));
        t = t/10;
        p--;
    }
    cout << "Reverse is - " << rev << endl;

}