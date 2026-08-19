//Problem #36: Write a program to ask the user to enter: Number1, Number2, Operation Type
#include <iostream>
using namespace std;

float ReadNumber(string Message)
{
    float Number;
    cout << Message;
    cin >> Number;
    return Number;
}

enum enOperationType { Add = '+', Subtract = '-', Multiply = '*', Divide = '/' };

enOperationType ReadOperationType()
{
    char OperationType;
    cout << "Enter the Operation Type (+,-,*,/): ";
    cin >> OperationType;
    return enOperationType(OperationType); // or (enOperationType)OperationType;
}

struct stOperation { float Number1, Number2; enOperationType Type; };

stOperation ReadOperation()
{
    stOperation Operation;
    Operation.Number1 = ReadNumber("Enter Number1: ");
    Operation.Number2 = ReadNumber("Enter Number2: ");
    Operation.Type = ReadOperationType();
    return Operation;
}
float Calculate(stOperation Operation)
{
    switch (Operation.Type)
    {
        case enOperationType::Add: return Operation.Number1 + Operation.Number2;
        case enOperationType::Subtract: return Operation.Number1 - Operation.Number2;
        case enOperationType::Multiply: return Operation.Number1 * Operation.Number2;
        case enOperationType::Divide: return Operation.Number1 / Operation.Number2;
        default: return Operation.Number1 + Operation.Number2;
    }
}
void PrintOperation(stOperation Op)
{
    cout << Op.Number1 << " " << (char)Op.Type << " " << Op.Number2 << " = " << Calculate(Op) << endl;
}

int main()
{
    //Declaring Variables
    //Initializing Variables
    stOperation Operation = ReadOperation();
    
    //Processing - Activity
    //PRINT - OUTPUT
    PrintOperation(Operation);
}
