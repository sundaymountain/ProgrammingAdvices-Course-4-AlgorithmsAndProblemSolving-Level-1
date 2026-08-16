//Problem #30: Write a program to calculate factorial of N
#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int N;
    do
    {
        cout << Message;
        cin >> N;
    } while (N < 0);
    return N;
}

int CalculateFactorial(int N)
{
    int Factorial = 1;
    for (int i = 1; i <= N;i++) {
        Factorial = Factorial * i;
    }
    return Factorial;
}

void PrintFactorial(int N, int Factorial)
{
    cout << "Factorial of " << N << " = " << Factorial << endl;
}

int main()
{
    //Declaring Variables
    int N, Factorial;
    //Initializing Variables
    N = ReadPositiveNumber("Enter a Positive Number N: ");
    //Processing - Activity
    Factorial = CalculateFactorial(N);
    //PRINT - OUTPUT
    PrintFactorial(N,Factorial);
}
