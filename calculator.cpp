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
