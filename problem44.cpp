//Problem #44: Day Of Week: Write a program to ask the user to enter : Day
#include <iostream>
using namespace std;

enum enDayOfWeek // : int .. // We can explicitly specify underlying type
{
    Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7
};

void PrintDayOfWeekMenu()
{
    cout << "**************************\n";
	// Instead of hardcoding numbers, we can display the enum values
	// std << "(" << enDayOfWeek::Sunday << ") Sunday\n";
	// ... or better yet, loop through values
    cout << "(1) Sunday \n(2) Monday \n(3) Tuesday \n"; 
    cout << "(4) Wednesday \n(5) Thursday \n(6) Friday \n";
    cout << "(7) Saturday\n";
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

enDayOfWeek ReadDayOfWeek()
{
    return (enDayOfWeek)ReadNumberInRange("the Number of Day", 1, 7);
}

string GetDayOfWeekString(enDayOfWeek DayOfWeek)
{
    switch (DayOfWeek) {
    case enDayOfWeek::Sunday:
        return "Sunday";
    case enDayOfWeek::Monday:
        return "Monday";
    case enDayOfWeek::Tuesday:
        return "Tuesday";
    case enDayOfWeek::Wednesday:
        return "Wednesday";
    case enDayOfWeek::Thursday:
        return "Thursday";
    case enDayOfWeek::Friday:
        return "Friday";
    case enDayOfWeek::Saturday:
        return "Saturday";
    default:
        return "Not a day of week!"; // shouldn't be triggerd
    }
}

int main()
{
    PrintDayOfWeekMenu();
    //Declaring Variables
    //Initializing Variables
    string DayOfWeekName = GetDayOfWeekString(ReadDayOfWeek());
    //Processing - Activity
    //PRINT - OUTPUT
    cout << DayOfWeekName << endl;
}
