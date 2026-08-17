//Problem #33: Write a program to ask the user to enter a Grade, Then print the grade as follows:
// -90–100 → Print A
// - 80–89 → Print B
// - 70–79 → Print C
// - 60–69 → Print D
// - 50–59 → Print E
// - Otherwise → Print F
#include <iostream>
using namespace std;

float ReadNumberInRange(string Message, int From, int Too)
{
    float Number;
    cout << "Enter " << Message << ": ";
    cin >> Number;
    while (Number < From || Number > Too)
    {
        cout << "Error, " << Message << " Should be in range (" << From << "-" << Too << ") : ";
        cin >> Number;
    }
    return Number;
}
void PrintGradeLetter(float Grade)
{
    if (Grade >= 90)      cout << "A" << endl;
    else if (Grade >= 80) cout << "B" << endl;
    else if (Grade >= 70) cout << "C" << endl;
    else if (Grade >= 60) cout << "D" << endl;
    else if (Grade >= 50) cout << "E" << endl;
    else                  cout << "F" << endl;
}
int main()
{
    //Declaring Variables
    float Grade;
    //Initializing Variables
    Grade = ReadNumberInRange("Your Grade", 0, 100);
    //Processing - Activity
    //PRINT - OUTPUT
    PrintGradeLetter(Grade); // we could do both function in one line.. ReadNumberInRange did a heavy and cool job so it just felt to let it rest :)
}
