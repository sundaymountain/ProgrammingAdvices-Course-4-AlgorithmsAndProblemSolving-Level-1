//Problem #39: Pay Remainder: Write a program to read a TotalBill and CashPaid, then calculate the remainder to be paid back.
#include <iostream>
using namespace std;

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

float CalculateRemainder(float TotalBill, float CashPaid)
{
    return CashPaid - TotalBill;    //     Remainder = CashPaid - TotalBill;
}

int main()
{
    //Declaring Variables
    //Initializing Variables with User Input
    float TotalBill = ReadPositiveNumber("Enter the Total Bill Amount: ");
    float CashPaid = ReadPositiveNumber("Enter the Cash Paid Amount: ");
    //Processing - Activity
    //PRINT - OUTPUT
    cout << "Remainder to be paid back = " << CalculateRemainder(TotalBill, CashPaid) << endl;
}
