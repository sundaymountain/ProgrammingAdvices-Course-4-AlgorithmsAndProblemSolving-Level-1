//Problem #25: Write a program to ask the user to enter his/her Age, If Age is between 18 and 45 Print "Valid Age" otherwise Print "Invalid Age" and re-ask user to enter a valid age
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

int ReadUntillAgeBetween(int From, int To)
{
    int Age = 0;

    do
    {
        Age = ReadAge();
    } while (!ValidateNumInRange(Age, From, To));

    return Age;
}

void PrintAgeResult(int Age)
{
    cout << "Valid Age" << endl;
    cout << "Your Age is: " << Age << endl;
}

int main()
{
    //Declaring Variables
    //Initializing Variables with User Input
    //Processing - Activity
    //PRINT - OUTPUT
    PrintAgeResult(ReadUntillAgeBetween(18, 45));
}
