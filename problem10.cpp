//Problem #10: Write a program to ask the user to enter 3 Marks, then Print the Average of entered 
#include <iostream>
using namespace std;

void Read3Marks(float& Mark1, float& Mark2, float& Mark3)
{
	cout << "Enter the first Mark: ";
	cin >> Mark1;

	cout << "Enter the second Mark: ";
	cin >> Mark2;

	cout << "Enter the third Mark ";
	cin >> Mark3; 
} 

float AverageOf3Mark(float Mark1, float Mark2, float Mark3) // or we could build on top of the sum funcion
{
	return (Mark1 + Mark2 + Mark3) / 3;
}

void PrintAverageMark(float Average)
{
	cout << "The Average of the Marks: " << Average << endl;
}

int main()
{
	float Mark1, Mark2, Mark3;
	Read3Marks(Mark1, Mark2, Mark3);
	PrintAverageMark(AverageOf3Mark(Mark1, Mark2, Mark3));
}
