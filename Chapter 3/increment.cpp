#include "iostream"

using namespace std;

int main()
{
    // Prefix
    int x = 0;
    int y = ++x;

    cout << x << " " << y << endl; // Result: Both x and y have the value of 1

    // Postfix
    int a = 0;
    int b = x++;

    cout << a << " " << b << endl; // Result: x evaluates to 1 and y evaluates to 0
}