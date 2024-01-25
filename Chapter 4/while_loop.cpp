#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the starting number: ";
    cin >> n;

    while (n > 0)
    {
        cout << n << ", ";
        n--;
    }

    cout << "Fire!" << endl;
    unsigned int i;
    do
    {
        cout << "Enter a number: ";
        cin >> i;
        cout << "You entered: " << i << endl;
    } while (i != 0);
    
    return 0;
}
