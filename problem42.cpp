//Problem #42: (Task Duration In Seconds) Write a program to calculate the task duration in seconds and print it on the screen.
//Given the time duration of a task in the number of days, hours, minutes, and seconds.
#include <iostream>
using namespace std;

struct stTaskDuration { int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds; };

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

stTaskDuration ReadTaskDuration()
{
    stTaskDuration TaskDuration;
    TaskDuration.NumberOfDays = ReadPositiveNumber("Enter the Number of Days: ");
    TaskDuration.NumberOfHours = ReadPositiveNumber("Enter the Number of Hours: ");
    TaskDuration.NumberOfMinutes = ReadPositiveNumber("Enter the Number of Minutes: ");
    TaskDuration.NumberOfSeconds = ReadPositiveNumber("Enter the Number of Seconds: ");
    return TaskDuration;
}

int CalcTaskDurationInSeconds(stTaskDuration TaskDuration)
{
    return TaskDuration.NumberOfDays * 24 * 60 * 60
        +  TaskDuration.NumberOfHours * 60 * 60
        +  TaskDuration.NumberOfMinutes * 60
        +  TaskDuration.NumberOfSeconds;
}

int main()
{
    //Declaring Variables
    //Initializing Variables with User Input
    //Processing - Activity
    int TaskDurationInSeconds = CalcTaskDurationInSeconds(ReadTaskDuration());
    //PRINT - OUTPUT
    cout << "Task Duration In seconds: " << TaskDurationInSeconds << endl;
}
