//Problem #28: Write a program to Sum odd numbers from 1 to N
#include <iostream>
using namespace std;

enum enOddOrEven { Odd = 1, Even = 2 };

int ReadN()
{
    int N;
    cout << "Enter a Number N: ";
    cin >> N;
    return N;
}

enOddOrEven CheckOddOrEven(int N)
{
    if (N % 2 != 0)
        return enOddOrEven::Odd;
    else
        return enOddOrEven::Even;
}

int SumOddNumbersFrom1tN_ForLoop(int N)
{
    int sum = 0;
    for (int i = 1; i <= N;i++) {

        if (CheckOddOrEven(i) == enOddOrEven::Odd) {
            sum = sum + i;
        }
    }
    return sum;
}
int SumOddNumbersFrom1tN_WhileLoop(int N)
{
    int sum = 0;
    int i = 1;
    while (i <= N) {

        if (CheckOddOrEven(i) == enOddOrEven::Odd) {
            sum = sum + i;
        }
            i++;
    }
    return sum;
}
int SumOddNumbersFrom1tN_DoWhileLoop(int N)
{
    int sum = 0;
    int i = 1;
    do
    {
        if (CheckOddOrEven(i) == enOddOrEven::Odd) {
            sum = sum + i;
        }
            i++;
    } while (i <= N);
    return sum;
}

void PrintSumOddNumbers1tN(int N, int Sum)
{
    cout << "Sum of Odd Numbers from 1 to " << N << " = " << Sum << endl;
}

int main()
{
    //Declaring Variables
    int N, sum;
    //Initializing Variables
    N = ReadN();
    //Processing - Activity
    //PRINT - OUTPUT
    sum = SumOddNumbersFrom1tN_ForLoop(N);
    PrintSumOddNumbers1tN(N,sum);

    sum = SumOddNumbersFrom1tN_WhileLoop(N);
    PrintSumOddNumbers1tN(N,sum);

    sum = SumOddNumbersFrom1tN_DoWhileLoop(N);
    PrintSumOddNumbers1tN(N,sum);
}
