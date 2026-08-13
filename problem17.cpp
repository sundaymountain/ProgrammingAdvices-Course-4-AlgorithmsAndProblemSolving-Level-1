//Problem #17: Write a program to calculate Triangle area then Print it on the screen.
#include <iostream>
using namespace std;

void Read2Numbers(float& A, float& H)
{
	cout << "Enter Triangle base A: ";
    cin >> A;

    cout << "Enter Triangle hieght H: ";
    cin >> H;
} 

float TriangleArea(float A, float H)
{
    return ((A * H) / 2);
}

void PrintTriangleArea(float Area)
{
	cout << "Triangle Area = " << Area << endl;
}

int main()
{
    //Declaring Variables
    float A, H;

    //Initializing Variables with User Input
	Read2Numbers(A, H);		// you could also do it with array or structs

    //Processing - Activity
    //PRINT - OUTPUT
    PrintTriangleArea(TriangleArea(A, H));
}
