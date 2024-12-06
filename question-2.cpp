#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a > b && a > c) cout << "The greatest number is " << a;
    else if (b > a && b > c) cout << "The greates number is " << b;
    else if (c > a && c > b) cout << "The greatest number is " << c;
    else if ((a==b && a > c) || (b == c) && b > a || (a == c) && a > b) {
      cout << "Two numbers are the largest";
    }
    else {
      cout << "All numbers are Equal" << endl;
    }
    return 0;
}
