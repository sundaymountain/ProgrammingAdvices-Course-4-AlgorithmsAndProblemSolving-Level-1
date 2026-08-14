//Problem #23: Write a program to calculate Circle area described around an arbitrary triangle
#include <iostream>
using namespace std;

void ReadTriangleData(float& A, float& B, float& C)
{
	cout << "Enter Triangle side A: ";
    cin >> A;
	cout << "Enter Triangle side B: ";
    cin >> B;
	cout << "Enter Triangle side C: ";
    cin >> C;
} 

float CircleAreaByATriangle(float A, float B, float C)
{
    const float PI = 3.14159;
    float P = (A + B + C) / 2;
    float T = (A * B * C) / (4 * sqrt(P * (P - A)*(P - B)*(P - C)));
    float Area = PI * pow(T, 2);
    return Area;
}

void PrintCircleArea(float Area)
{
	cout << "Circle Area = " << Area << endl;
}

int main()
{
    //Declaring Variables
    float A, B, C;
    //Initializing Variables with User Input
    ReadTriangleData(A, B, C);
    //Processing - Activity
    //PRINT - OUTPUT
    PrintCircleArea(CircleAreaByATriangle(A, B, C));
}
