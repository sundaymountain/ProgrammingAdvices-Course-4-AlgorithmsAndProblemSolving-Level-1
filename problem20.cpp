//Problem #20: Write a program to calculate Circle area inscribed in a square, then Print it on the screen. (same)
#include <iostream>
using namespace std;

float ReadSquareSideOfCircle()
{
    float A;
	cout << "Enter Square Side A: ";
    cin >> A;
    return A;
} 

float CircleAreaInscribedInSquare(float A)
{
    const float PI = 3.14159;
    return ((PI * pow(A, 2)) / 4);
}

void PrintCircleArea(float Area)
{
	cout << "Circle Area = " << Area << endl;
}

int main()
{
    //Declaring Variables
    //Initializing Variables with User Input
    //Processing - Activity
    //PRINT - OUTPUT
    PrintCircleArea(CircleAreaInscribedInSquare(ReadSquareSideOfCircle()));
}
