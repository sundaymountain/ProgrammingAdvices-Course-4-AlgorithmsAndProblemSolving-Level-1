//Problem #32: (Power of M) Write a program to ask the user to enter a Number, and to enter M, then Print Number^M

#include <iostream>
using namespace std;

struct stPowerCalcData { int Number, Power, Result; };

int ReadNumber(string Message)
{
    int Number;
    cout << Message;
    cin >> Number;
    return Number;

}

stPowerCalcData CalculatePower(int N, int M)
{
    int Result = 1;
    for (int i = 1; i <= M;i++) {
        Result = Result * N;
    }
    stPowerCalcData PowerCalcData;
    PowerCalcData.Number = N;
    PowerCalcData.Power = M;
    PowerCalcData.Result = Result;
    return PowerCalcData;
}

void PrintPowerResult(stPowerCalcData PowerCalcData)
{
    cout << PowerCalcData.Number << " to the power of " << PowerCalcData.Power 
        << " = " << PowerCalcData.Result << endl;
}

int main()
{
    //Declaring Variables
    //Initializing Variables
    //Processing - Activity
    //PRINT - OUTPUT
    PrintPowerResult(CalculatePower(ReadNumber("enter a Number (n): "), ReadNumber("Enter a Number (power): ")));
}
