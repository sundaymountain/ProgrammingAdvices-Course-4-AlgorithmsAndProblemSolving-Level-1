//Problem #43: Seconds to Days Hours Minutes Seconds
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

stTaskDuration SecondsToTaskDuration(int DurationInSeconds)
{
    stTaskDuration TaskDuration;
    const int SecondsPerDay = 24*60*60;
	const int SecondsPerHour = 60*60;
	const int SecondsPerMinute = 60;
    
    int Remainder = 0;
	TaskDuration.NumberOfDays = DurationInSeconds / SecondsPerDay;
	Remainder = DurationInSeconds % SecondsPerDay;
	TaskDuration.NumberOfHours =  Remainder / SecondsPerHour;
	Remainder = Remainder % SecondsPerHour;
	TaskDuration.NumberOfMinutes = Remainder / SecondsPerMinute;
	Remainder = Remainder % SecondsPerMinute;
	TaskDuration.NumberOfSeconds = Remainder;   

    return TaskDuration;
}

void Print4CharInColons(int D, int H, int M, int S)
{
    cout << D << ":" << H << ":" << M << ":" << S << endl;
}
void PrintTaskDurationInColons(stTaskDuration TaskDuration)
{
    //cout << TaskDuration.NumberOfDays << ":" << TaskDuration.NumberOfHours << ":" << TaskDuration.NumberOfMinutes << ":" << TaskDuration.NumberOfSeconds << endl;
    Print4CharInColons(TaskDuration.NumberOfDays, TaskDuration.NumberOfHours, TaskDuration.NumberOfMinutes, TaskDuration.NumberOfSeconds);
}


int main()
{
    //Declaring Variables
    //Initializing Variables with User Input
    int TotalDurationInSeconds = ReadPositiveNumber("Enter the number of Seconds: ");
    //Processing - Activity
    //PRINT - OUTPUT
    PrintTaskDurationInColons(SecondsToTaskDuration(TotalDurationInSeconds));
}
