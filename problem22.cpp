//Problem #22: Write a program to calculate Circle area inscribed in an Isosceles Triangle, then Print it on the screen.
#include <iostream>
using namespace std;

void ReadTriangleData(float& A, float& B)
{
	cout << "Enter Triangle side A: ";
    cin >> A;
	cout << "Enter Triangle side B: ";
    cin >> B;
} 

float CircleAreaByITriangle(float A, float B)
{
    const float PI = 3.14159;
    float Area = PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));
    return Area;
}

void PrintCircleArea(float Area)
{
	cout << "Circle Area = " << Area << endl;
}

int main()
{
    //Declaring Variables
    float A, B;
    //Initializing Variables with User Input
    ReadTriangleData(A, B);
    //Processing - Activity
    //PRINT - OUTPUT
    PrintCircleArea(CircleAreaByITriangle(A, B));
}
