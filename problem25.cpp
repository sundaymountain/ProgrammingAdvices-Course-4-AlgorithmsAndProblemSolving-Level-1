//Problem #25: Write a program to ask the user to enter his/her Age, If Age is between 18 and 45 Print "Valid Age" otherwise Print "Invalid Age" and re-ask user to enter a valid age
// mimicing the clean style with the approach of divide & conquer while using the primitive programming concepts in c++
// there is better
#include <iostream>
using namespace std;

int ReadAge()
{
    int Age;
    cout << "Enter your age: ";
    cin >> Age;
    return Age;
}

bool ValidateNumInRange(int Num, int From, int To)
{
    return (Num >= From && Num <= To);
}

void PrintAgeResult(int Age)
{
    while (true) {
        if (ValidateNumInRange(Age, 18, 45)) {
            cout << "Valid Age" << endl;
            break;
        }
        else {
            cout << "Invalid Age" << endl;
            Age = ReadAge();
        }
    }
}

int main()
{
    //Declaring Variables
    //Initializing Variables with User Input
    //Processing - Activity
    //PRINT - OUTPUT
    PrintAgeResult(ReadAge());
}
