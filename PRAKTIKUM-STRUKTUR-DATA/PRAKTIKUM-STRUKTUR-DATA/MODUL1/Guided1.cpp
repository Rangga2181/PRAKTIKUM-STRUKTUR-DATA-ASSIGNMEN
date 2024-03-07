#include <iostream>
using namespace std;
//Main program
int main()
{
    char op;
    float num1, num2;
    //It allows User to enter operator i.e.+,-,*./
    cin >> op;
    // It allow user to enter the operands
    cin >> num1 >> num2;
    //switch statement begins
    switch (op)
    {
    case '+':
        cout<< num1 + num2;
        break;
    case '-':
        cout<< num1 - num2;
        break;
    case '*':
        cout<< num1 * num2;
        break;
    case '/':
        cout<< num1 / num2;
        break;
        //if the operator is other than +,-,*,/,
        //erorr message will display
    default:
        cout<< "Erorr! opperation is not correct";
    } //switch statement ends
return 0;
}