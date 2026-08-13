//Problem #16: Write a program to calculate Rectangle area through diagonal and side area of rectangle and print it on the screen.
#include <iostream>
using namespace std;

void Read2Numbers(float& A, float& D)
{
	cout << "Enter Rectangle side A: ";
    cin >> A;

    cout << "Enter Rectangle diagonal D: ";
    cin >> D;
} 

float RectAreaBySideAndDiagonal(float A, float D)
{
	return (A * sqrt(pow(D, 2) - pow(A, 2)));
}

void PrintRectArea(float Area)
{
	cout << "Rectangle Area = " << Area << endl;
}

int main()
{
    //Declaring Variables
    float A, D;

    //Initializing Variables with User Input
	Read2Numbers(A, D);		// you could also do it with array or structs

    //Processing - Activity
    //PRINT - OUTPUT
    PrintRectArea(RectAreaBySideAndDiagonal(A, D));
}
