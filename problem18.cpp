//Problem #18: Write a program to calculate Circle area then Print it on the screen.
#include <iostream>
using namespace std;

float ReadRadius()
{
    float R;
	cout << "Enter Circle Radius r: ";
    cin >> R;
    return R;
} 

float CircleArea(float R)
{
    const float PI = 3.14159;
    return (pow(R, 2) * PI);
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
    PrintCircleArea(CircleArea(ReadRadius()));
}
