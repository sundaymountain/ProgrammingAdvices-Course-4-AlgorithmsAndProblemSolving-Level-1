//Problem #40: Service Fee and Sales Tax.
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

float TotalBillAfterFeeAndTax(float BillValue)
{
    float ServiceFee = 1.1, SalesTax = 1.16;
    float TotalBill;
    TotalBill = BillValue * ServiceFee;
    TotalBill = TotalBill * SalesTax;
    return TotalBill;

}

int main()
{
    //Declaring Variables
    float BillValue, TotalBill;
    //Initializing Variables with User Input
    BillValue = ReadPositiveNumber( "Enter the Bill Value: ");
    //Processing - Activity
    TotalBill = TotalBillAfterFeeAndTax(BillValue);
    //PRINT - OUTPUT
    cout << "Total Bill = " << TotalBill << endl;
}
