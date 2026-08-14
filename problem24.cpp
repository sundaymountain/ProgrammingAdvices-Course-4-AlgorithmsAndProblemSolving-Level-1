//Problem #24: Write a program to ask the user to enter his/her Age, If Age is between 18 and 45 Print "Valid Age" otherwise Print "Invalid Age".
// first attempt to mimic the clean style of divide & conquer and using the primitive programming concepts ic c++
// there is better
#include <iostream>
using namespace std;

enum enAgeValid { Valid = 1, Invalid = 2 };

int ReadAge()
{
    int Age;
    cout << "Enter your age: ";
    cin >> Age;
    return Age;
}

enAgeValid CheckAge(int Age)
{
    if (Age >= 18 && Age <= 45)
        return enAgeValid::Valid;
    else
        return enAgeValid::Invalid;
}

void PrintAgeResult(int Age)
{
    if (CheckAge(Age) == enAgeValid::Valid)
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
