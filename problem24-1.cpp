//Problem #24: Write a program to ask the user to enter his/her Age, If Age is between 18 and 45 Print "Valid Age" otherwise Print "Invalid Age".
#include <iostream>
using namespace std;

int ReadAge()
{
    int Age;
    cout << "Enter your age: ";
    cin >> Age;
    return Age;
}

bool ValidateNumInRange(int Num, int From, int To)
{
    return (Num >= From && Num <= To);
}

void PrintAgeResult(int Age)
{
    if (ValidateNumInRange(Age, 18, 45))
        cout << "Valid Age" << endl;
    else
        cout << "Invalid Age" << endl;
}

int main()
{
    //Declaring Variables
    //Initializing Variables with User Input
    //Processing - Activity
    //PRINT - OUTPUT
    PrintAgeResult(ReadAge());
}
