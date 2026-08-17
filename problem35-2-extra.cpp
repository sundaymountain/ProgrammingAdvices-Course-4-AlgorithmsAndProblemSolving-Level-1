//Problem #35: Piggy Bank Calculator
// another way (playground)..
#include <iostream>
using namespace std;

struct stPiggyBank
{
    int Pennies, Nickels, Dimes, Quarters, Dollars;
    // int TotalPennies;
    // float TotalDollars; we can use it but not for now..
};

int ReadNumber(string Message)
{
    int Number;
    cout << "Enter " << Message << ": ";
    cin >> Number;
    return Number;
}

stPiggyBank ReadPiggyBank()
{
    stPiggyBank PiggyBank;
    PiggyBank.Pennies = ReadNumber("the Number of Pennies");
    PiggyBank.Nickels = ReadNumber("the Number of Nickels");
    PiggyBank.Dimes = ReadNumber("the Number of Dimes");
    PiggyBank.Quarters = ReadNumber("the Number of Quarters");
    PiggyBank.Dollars = ReadNumber("the Number of Dollars");
    return PiggyBank;
}

// from someone من المنصة

double CalculateTotalPennies(const stPiggyBank& PiggyBank) {
    return PiggyBank.Pennies 
         + PiggyBank.Nickels * 5 
         + PiggyBank.Dimes * 10 
         + PiggyBank.Quarters * 25 
         + PiggyBank.Dollars * 100;
}

double ConvertToDollars(double TotalPennies) {
    return TotalPennies / 100.0;
}

void PrintValues(double TotalPennies, double TotalDollars) {
    cout << "Total Pennies: " << TotalPennies << '\n';
    cout << "Total Dollars: " << TotalDollars << '\n';
}
int main()
{
    //Declaring Variables
    //Initializing Variables with User Input
    stPiggyBank PiggyBank = ReadPiggyBank();
    //Processing - Activity
    int TotalPennies = CalculateTotalPennies(PiggyBank);
    double pennies = CalculateTotalPennies(PiggyBank);
    double dollars = ConvertToDollars(pennies);
    //PRINT - OUTPUT
    PrintValues(pennies, dollars);
}
