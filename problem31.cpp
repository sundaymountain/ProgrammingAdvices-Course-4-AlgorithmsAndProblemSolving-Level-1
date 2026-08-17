//Problem #31: Write a program to ask the user to enter a Number, then Print the Number^2, Number^3, Number^4.
#include <iostream>
using namespace std;

int ReadNumber()
{
    int N;
    cout << "Enter a Number: ";
    cin >> N;
    return N;
}

int power(int N, int M)
{
    int Result = 1;
    for (int i = 1; i <= M; i++)
    {
        Result = Result * N;
    }
    return Result;
}

void PrintPowerOf2_3_4(int N)
{
    cout << N << " to the power of 2 is: " << power(N, 2) << endl;
    cout << N << " to the power of 3 is: " << power(N, 3) << endl;
    cout << N << " to the power of 4 is: " << power(N, 4) << endl;
}
int main()
{
    //Declaring Variables
    //Initializing Variables with User Input
    //Processing - Activity
    //PRINT - OUTPUT
    PrintPowerOf2_3_4(ReadNumber());
}
