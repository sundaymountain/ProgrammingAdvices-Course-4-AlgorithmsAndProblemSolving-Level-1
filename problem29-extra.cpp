// Extra practice - General Sum Function 
#include <iostream>
using namespace std;

enum enOddOrEven { Odd = 1, Even = 2 };
enum enSumType { SumAll = 0, SumOdd = 1, SumEven = 2 };

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

int SumNumbersFrom1tN(int N,enSumType SumType)
{
    int sum = 0;
    if (SumType==enSumType::SumEven)
    {
        for (int i = 1; i <= N;i++) 
        {
            if (CheckOddOrEven(i) == enOddOrEven::Even) 
                sum = sum + i;
        }
    }
    else if (SumType == enSumType::SumOdd) 
    {
        for (int i = 1; i <= N;i++) 
        {
            if (CheckOddOrEven(i) == enOddOrEven::Odd) 
                sum = sum + i;
        }
    }
    else
    {
        for (int i = 1; i <= N;i++) 
        {
                sum = sum + i;
        }
    }

    return sum;
}

void PrintSumEvenNumbers1tN(int N, int Sum, enSumType SumType)
{
    if (SumType == enSumType::SumEven)
    {
        cout << "Sum of Even Numbers from 1 to " << N << " = " << Sum << endl;
    }
    else if (SumType == enSumType::SumOdd)
    {
        cout << "Sum of Odd Numbers from 1 to " << N << " = " << Sum << endl;
    }
    else
    {
        cout << "Sum of All Numbers from 1 to " << N << " = " << Sum << endl;
    }
}

int main()
{
    //Declaring Variables
    int N, sum;
    //Initializing Variables
    N = ReadN();
    //Processing - Activity
    //PRINT - OUTPUT
    sum = SumNumbersFrom1tN(N, enSumType::SumAll);
    PrintSumEvenNumbers1tN(N,sum, enSumType::SumAll);
}
