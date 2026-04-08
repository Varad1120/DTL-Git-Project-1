#include <bits/stdc++.h>
using namespace std;

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}
int divide(int a, int b)
{
    return b == 0 ? -1 : a / b;
}

// Logical Operators
int AND(int a, int b)
{
    return a && b;
}
int OR(int a, int b)
{
    return a || b;
}
int XOR(int a, int b)
{
    return a != b;
}
int NOT(int a)
{
    return !a;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Addition: " << add(a, b) << endl;
    cout << "Subtraction: " << sub(a, b) << endl;
    cout << "Multiplication: " << mul(a, b) << endl;
    cout << "Division: " << divide(a, b) << endl;

    cout << "Logical AND: " << AND(a, b) << endl;
    cout << "Logical OR: " << OR(a, b) << endl;
    cout << "Logical XOR: " << XOR(a, b) << endl;
    cout << "Logical NOT of a: " << NOT(a) << endl;

    return 0;
}