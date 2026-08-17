//Problem #35: Piggy Bank Calculator
// mimicing the clean style with the approach of divide & conquer while using the primitive programming concepts in c++
// there is better

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

void ReadPiggyBank(stPiggyBank& PiggyBank)
{
    PiggyBank.Pennies = ReadNumber("the Number of Pennies");
    PiggyBank.Nickels = ReadNumber("the Number of Nickels");
    PiggyBank.Dimes = ReadNumber("the Number of Dimes");
    PiggyBank.Quarters = ReadNumber("the Number of Quarters");
    PiggyBank.Dollars = ReadNumber("the Number of Dollars");
}

int CalculateTotalPennies(stPiggyBank PiggyBank)
{
    // TotalPennies = (Pennies)+(5 * Nickels) + (10 * Dimes) + (25 * Quarters) + (100 * Dollars);
    return ((PiggyBank.Pennies)+(5 * PiggyBank.Nickels) + (10 * PiggyBank.Dimes) + (25 * PiggyBank.Quarters) + (100 * PiggyBank.Dollars));
}

float CalculateTotalDollars(stPiggyBank PiggyBank)
{
    // TotalDollars = (TotalPennies) / 100; 
    return ((float)CalculateTotalPennies(PiggyBank) / 100);
}

int main()
{
    //Declaring Variables
    stPiggyBank PiggyBank;

    //Initializing Variables with User Input
    ReadPiggyBank(PiggyBank);

    //Processing - Activity
    //PRINT - OUTPUT
    cout << CalculateTotalPennies(PiggyBank) << " Pennies" << endl;     // cout << TotalPennies << " Pennies" << endl;
    cout << CalculateTotalDollars(PiggyBank) << " Dollars" << endl;     // cout << TotalDollars << " Dollars" << endl;
}
