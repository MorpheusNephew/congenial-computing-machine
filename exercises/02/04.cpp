#include <iostream>

using namespace std;

void displaySum(float a, float b);
void displayDifference(float a, float b);

int main()
{
    float first = 123.456, second = 76.543;

    displaySum(first, second);
    displayDifference(first, second);

    return 0;
}

void displaySum(float a, float b)
{
    float sum = a + b;

    cout << a << " + " << b << " = " << sum << endl;
}

void displayDifference(float a, float b)
{
    float difference = a - b;

    cout << a << " - " << b << " = " << difference << endl;
}
