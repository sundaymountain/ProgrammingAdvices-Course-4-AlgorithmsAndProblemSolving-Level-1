//Problem #45: Month of Year: Write a program to ask the user to enter: Month
#include <iostream>
using namespace std;

enum enMonthOfYear { Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, Jun = 6, Jul = 7, Aug = 8, Sep = 9, Oct = 10, Nov = 11, Dec = 12 };

void PrintMonthOfYearMenu()
{
    cout << "**************************\n";
    cout << "(1) Jan \n(2) Feb \n(3) Mar \n"; 
    cout << "(4) Apr \n(5) May \n(6) Jun \n";
    cout << "(7) Jul \n(8) Aug \n(9) Sep \n";
    cout << "(10) Oct \n(11) Nov \n(12) Dec \n";
    cout << "**************************\n";
}

int ReadNumberInRange(string Message, int From, int Too)
{
    int Number;
    cout << "Enter " << Message << ": ";
    cin >> Number;
    while (Number < From || Number > Too)
    {
        cout << "Error, " << Message << " Should be in range (" << From << "-" << Too << ") : ";
        cin >> Number;
    }
    return Number;
}

enMonthOfYear ReadMonthOfYear()
{
    return (enMonthOfYear)ReadNumberInRange("the Number of Month", 1, 12);
}

string GetMonthOfYearString(enMonthOfYear MonthOfYear)
{
    switch (MonthOfYear) {
        case enMonthOfYear::Jan:
        return "January";
        case enMonthOfYear::Feb:
        return "February";
        case enMonthOfYear::Mar:
        return "March";
        case enMonthOfYear::Apr:
        return "April";
        case enMonthOfYear::May:
        return "May";
        case enMonthOfYear::Jun:
        return "June";
        case enMonthOfYear::Jul:
        return "July";
        case enMonthOfYear::Aug:
        return "August";
        case enMonthOfYear::Sep:
        return "September";
        case enMonthOfYear::Oct:
        return "October";
        case enMonthOfYear::Nov:
        return "November";
        case enMonthOfYear::Dec:
        return "December";
    default:
        return "Wrong Month of the year!";    // shouldn't be triggerd
    }
}

int main()
{
    PrintMonthOfYearMenu();
    //Declaring Variables
    //Initializing Variables
    string MonthOfYearName = GetMonthOfYearString(ReadMonthOfYear());
    //Processing - Activity
    //PRINT - OUTPUT
    cout << MonthOfYearName << endl;
}
