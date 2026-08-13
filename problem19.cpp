//Problem #19: Write a program to calculate Circle area through diameter, then Print it on the screen.
#include <iostream>
using namespace std;

float ReadCircleDiameter()
{
    float D;
	cout << "Enter Circle Diameter D: ";
    cin >> D;
    return D;
} 

float CircleAreaByDiameter(float D)
{
    const float PI = 3.14159;
    return ((PI * pow(D, 2)) / 4);
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
    PrintCircleArea(CircleAreaByDiameter(ReadCircleDiameter()));
}
