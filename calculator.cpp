#include<bits/stdc++.h>

int main(){


    int add(int a, int b){
        return a + b;
    }
    int sub(int a, int b){
        return a - b;
    }

    int mul(int a, int b){
        return a * b;
    }
    int divide(int a, int b){
        return b == 0 ? -1 : a / b;
    }

    // Logical Operators
    int AND(int a, int b){
        return a && b;
    }
    int OR(int a, int b){
        return a || b;
    }
    int XOR(int a, int b){
        return a != b;
    }
    int NOT(int a){
        return !a;
    }


    int num1, num2;
    char op;
    //Menu
    cout << "Enter First Number";
    cin >> num1;
    cout << "Enter Second Number";
    cin >> num2;
    cout << "Enter Operator";
    cin >> op;

    switch(op){
        case '+':
            cout << add(num1, num2);
            break;
        case '-':
            cout << sub(num1, num2);
            break;
        case '*':
            cout << mul(num1, num2);
            break;
        case '/':
            cout << divide(num1, num2);
            break;
        default:
            cout << "Invalid Operator";
    }
}

    return 0;
