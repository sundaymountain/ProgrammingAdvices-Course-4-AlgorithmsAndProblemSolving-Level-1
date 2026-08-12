//Problem #15: Write a program to calculate rectangle area and print it on the screen.
#include <iostream>
using namespace std;

void Read2Numbers(float& A, float& B)
{
	cout << "Enter Rectangle width  A: ";
    cin >> A;

    cout << "Enter Rectangle length B: ";
    cin >> B;
} 

float CalcRectArea(float A, float B)
{
	return (A * B);
}

void PrintRectArea(float Area)
{
	cout << "Rectangle Area = " << Area << endl;
}

int main()
{
	float A, B;
	Read2Numbers(A, B);		// you could also do it with array or structs
	PrintRectArea(CalcRectArea(A, B));
	
}
