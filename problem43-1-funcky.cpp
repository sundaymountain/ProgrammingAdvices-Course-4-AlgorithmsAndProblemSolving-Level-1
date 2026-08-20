//Problem #43: Seconds to Days Hours Minutes Seconds (another way)
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
    
    int Remainder = 0;
    TaskDuration.NumberOfSeconds = DurationInSeconds % 60;
    Remainder = (DurationInSeconds - TaskDuration.NumberOfSeconds) / 60;
	TaskDuration.NumberOfMinutes = Remainder % 60;
	Remainder = (Remainder - TaskDuration.NumberOfMinutes) / 60;
	TaskDuration.NumberOfHours =  Remainder % 24;
    Remainder = (Remainder - TaskDuration.NumberOfHours) / 24;
    TaskDuration.NumberOfDays = Remainder;

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
