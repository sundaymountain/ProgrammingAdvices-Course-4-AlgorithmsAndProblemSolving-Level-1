//Problem #34: Write a program to ask the user to enter the TotalSales
#include <iostream>
using namespace std;

float ReadNumber(string Message)
{
    float Number;
    cout << "Enter " << Message << ": ";
    cin >> Number;
    return Number;
}

float GetComissionPercentage(float TotalSales)
{
    float Percentage = 0;
    if (TotalSales >= 1000000) Percentage = 0.01;
    else if (TotalSales >= 500000) Percentage = 0.02;
    else if (TotalSales >= 100000) Percentage = 0.03;
    else if (TotalSales >= 50000) Percentage = 0.05;
    else Percentage = 0;

    return Percentage;
}

float CalculateTotalComission(float TotalSales)
{
    return (TotalSales * GetComissionPercentage(TotalSales));
    // Commission = TotalSales * Percentage;
}

int main()
{
    //Declaring Variables
    float TotalSales; // Commission, Percentage;
    //Initializing Variables
    TotalSales = ReadNumber("The Total Sales");
    //Processing - Activity
    //PRINT - OUTPUT
    cout << "Comission Percentage = " << GetComissionPercentage(TotalSales) << endl; // we could have used the Percentage Variable
    cout << "Total Comission = " << CalculateTotalComission(TotalSales) << endl; // same for the Comission variable
}
