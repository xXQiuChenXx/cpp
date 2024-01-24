#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "What is your age?" << endl;
    cin >> age;

    cout << "Your age is " << age << endl;
    if (age > 18)
    {
        cout << "Adult" << endl;
    }
    else
    {
        cout << "Minor" << endl;
    }
    
    // string category = age >= 18 ? "Adult" : "Minor";
     // cout << category << endl;
    return 0;
}