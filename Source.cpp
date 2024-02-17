#include <iostream>
#include "IntPower.h"
using namespace std;

IntPower makeIntPower(double a, int b) {
    IntPower obj;
    if (!obj.Init(a, b))
        cout << "wrong arguments to Init" << endl;
    return obj;
}

int main() {
    IntPower i;
    i.Read();
    i.Display();
    cout << "Result of power operation: " << i.power() << endl;

    IntPower j;
    double userBase;
    int userExponent;
    cout << "first: ";
    cin >> userBase;
    cout << "second: ";
    cin >> userExponent;
    j = makeIntPower(userBase, userExponent);
    j.Display();
    cout << "Result of power operation: " << j.power() << endl;

    return 0;
}