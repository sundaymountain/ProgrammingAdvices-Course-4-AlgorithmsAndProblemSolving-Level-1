//Problem #21: Write a program to calculate Circle area along the circumference, then Print it on the screen.
#include <iostream>
using namespace std;

float ReadCircumference()
{
    float L;
	cout << "Enter Circumference L: ";
    cin >> L;
    return L;
} 

float CircleAreaByCircumference(float L)
{
    const float PI = 3.14159;
    return ((pow(L, 2)) / (4 * PI));
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
    PrintCircleArea(CircleAreaByCircumference(ReadCircumference()));
}
