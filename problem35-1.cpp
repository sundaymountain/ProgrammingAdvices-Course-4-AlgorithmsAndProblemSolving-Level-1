//Problem #35: Piggy Bank Calculator
// after checking dr. mohammed's clean approach
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

void ReadPiggyBank(stPiggyBank& PiggyBank) // I will stick with passing by ref here + using the lovely ReadNumber function
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
/* 
    // Not Needed because it is alot of calculations just to get a value we 
    // already had to then divide it by 100, better to store the value we got from CalculateTotalPennies
    // then simply do our operation .. /100 
float CalculateTotalDollars(stPiggyBank PiggyBank)
{
    // TotalDollars = (TotalPennies) / 100; 
    return ((float)CalculateTotalPennies(PiggyBank) / 100);
}
*/
int main()
{
    //Declaring Variables
    stPiggyBank PiggyBank;

    //Initializing Variables with User Input
    ReadPiggyBank(PiggyBank);

    //Processing - Activity
    int TotalPennies = CalculateTotalPennies(PiggyBank);
    //PRINT - OUTPUT
    cout << TotalPennies << " Pennies" << endl;     // cout << TotalPennies << " Pennies" << endl;
    cout << (float)TotalPennies/100 << " Dollars" << endl;     // cout << TotalDollars << " Dollars" << endl;
}
