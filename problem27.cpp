//Problem #27: Write a program to print numbers from N to 1
#include <iostream>
using namespace std;

int ReadN()
{
    int N;
    cout << "Enter a Number N: ";
    cin >> N;
    return N;
}
void PrintNto1_ForLoop(int N)
{
    for (int i = N;i >= 1;i--) {
        cout << i << endl;
    }
}
void PrintNto1_WhileLoop(int N)
{
    int i = N;
    while (i >= 1) { cout << i << endl; i--; }
}
void PrintNto1_DoWhileLoop(int N)
{
    int i = N;
    do { cout << i << endl; i--; } while (i >= 1);
}
int main()
{
    //Declaring Variables
    //Initializing Variables
    int N = ReadN();
    //Processing - Activity
    //PRINT - OUTPUT
    PrintNto1_ForLoop(N);
    PrintNto1_WhileLoop(N);
    PrintNto1_DoWhileLoop(N);
}
