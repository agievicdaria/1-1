#include <iostream>
#include <cmath>
#include "IntPower.h"
using namespace std;

void IntPower::SetFirst(double a)
{
    first = a;
}
void IntPower::SetSecond(int b)
{
    second = b;
}

bool IntPower::Init(double a, int b) {
    if (a != 0.0)
    {
        first = a;
        second = b;
        return true;
    }
    else
    {
        first = 0;
        second = 0;
        return false;
    }
}

void IntPower::Read()
{
    int a, b;
    do
    {
        cout << "first = ";
        cin >> a;
        cout << "second = ";
        cin >> b;
    } while (!Init(a, b));
}

void IntPower::Display() const {
    cout << "base: " << first << ", exponent: " << second << endl;
}

double IntPower::power() const {
    return pow(first, second);
}
