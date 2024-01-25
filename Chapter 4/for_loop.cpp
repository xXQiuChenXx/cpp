#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum += i;
    }

    cout << "Total sum (1-100): " << sum << endl;

    int sumI = 0, sumJ = 0;
    for (int i = 1, j = 100; i <= 100, j <= 200; i++, j++)
    {
        sumI += i;
        sumJ += j;
    }

    cout << "Total sum (1-100): " << sumI << endl;
    cout << "Total sum (100-200): " << sumJ << endl;

    int counter = 0;
    do
    {
        cout << counter << ", ";
        counter++;
    } while (counter <= 10);

    return 0;
}