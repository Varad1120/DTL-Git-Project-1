#include<bits/stdc++.h>

int main(){


    int add(){

    }
    int sub(){

    }

    int mul(){
        
    }
    int divide(){
        
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
            cout << num1 + num2;
            break;
        case '-':
            cout << num1 - num2;
            break;
        case '*':
            cout << num1 * num2;
            break;
        case '/':
            cout << num1 / num2;
            break;
        default:
            cout << "Invalid Operator";
    }
}

    return 0;
