//Problem #41: (Weeks and Days) Write a program to read a NumberOfHours and calculate the number of weeks and days included in that number.
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

float HoursToDays(float NumberOfHours)
{
    return NumberOfHours / 24;
}
float HoursToWeeks(float NumberOfHours)
{
    return NumberOfHours / 24 / 7;
}

int main()
{
    //Declaring Variables
    //Initializing Variables with User Input
    float NumberOfHours = ReadPositiveNumber( "Enter the Number of Hours: ");
    //Processing - Activity
    //PRINT - OUTPUT
    cout << "Total Days: " << HoursToDays(NumberOfHours) << endl;
    cout << "Total Weeks: " << HoursToWeeks(NumberOfHours) << endl;
}
