//Problem #38: (Is Prime Number) Write a program to read a number and check if it is a prime number or not.
//Note: A prime number can only be divided by 1 and itself.
#include <iostream>
using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

float ReadPositiveNumber(string Message)
{
    float Number;
    do
    {
        cout << Message;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

enPrimeNotPrime CheckPrime(int Number)
{
    if (Number < 2)
        return enPrimeNotPrime::NotPrime;

    int HalfOfNumber = round((float)Number / 2);
    for (int i = 2; i <= HalfOfNumber; i++)
    {
        if (Number % i == 0)
            return enPrimeNotPrime::NotPrime;
    }
    return enPrimeNotPrime::Prime;
}

void PrintPrimeResult(int Number)
{
    if (CheckPrime(Number) == enPrimeNotPrime::Prime)
        cout << Number << " is a Prime Number." << endl;
    else
        cout << Number << " is Not a Prime Number." << endl;
}

int main()
{
    //Declaring Variables
    //Initializing Variables
    //Processing - Activity
    //PRINT - OUTPUT
    PrintPrimeResult(ReadPositiveNumber("Enter a positive number: "));
}
