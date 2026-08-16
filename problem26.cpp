//Problem #26: Write a program to print numbers from 1 to N
#include <iostream>
using namespace std;

int ReadN()
{
    int N;
    cout << "Enter a Number N: ";
    cin >> N;
    return N;
}
void Print1toN_ForLoop(int N)
{
    for (int i = 1;i <= N;i++) {
        cout << i << endl;
    }
}
void Print1toN_WhileLoop(int N)
{
    int i = 1;
    while (i <= N) { cout << i << endl; i++; }
}
void Print1toN_DoWhileLoop(int N)
{
    int i = 1;
    do { cout << i << endl; i++; } while (i <= N);
}
int main()
{
    //Declaring Variables
    //Initializing Variables
    int N = ReadN();
    //Processing - Activity
    //PRINT - OUTPUT
    Print1toN_ForLoop(N);
    Print1toN_WhileLoop(N);
    Print1toN_DoWhileLoop(N);
}
