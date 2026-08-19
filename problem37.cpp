//Problem #37: (Sum Until -99) Write a program to read numbers from the user and sum them. Keep reading until the user enters -99, then print the sum on the screen.
#include <iostream>
#include <string>
using namespace std;

float ReadNumber(string Message)
{
    float Number;
    cout << Message;
    cin >> Number;
    return Number;
}

int SumUntilminus99()
{
    float Sum = 0, Num;
    int Counter = 1;
    do
    {
        Num = ReadNumber("Enter number " + to_string(Counter) + ": ");
        if (Num == -99) break;
        Sum += Num;
        Counter++;
    } while (Num != -99);
    return Sum;
}

int main()
{
    //Declaring Variables
    int Sum;
    //Initializing Variables
    //Processing - Activity
    Sum = SumUntilminus99();
    //PRINT - OUTPUT
    cout << "Sum = " << Sum << endl;
}
