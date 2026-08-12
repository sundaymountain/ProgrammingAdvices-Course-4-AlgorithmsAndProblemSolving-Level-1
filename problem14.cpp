//Problem #14: Write a program to ask the user to enter 2 Numbers, Then Print the two numbers, then Swap the two numbers and Print them.
#include <iostream>
using namespace std;

void Read2Numbers(float& Num1, float& Num2)
{
	cout << "Enter the first Number: ";
	cin >> Num1;

	cout << "Enter the second Number: ";
	cin >> Num2;
} 

void Swap2Numbes(float& Num1, float& Num2)
{
	float Temp = Num1;
	Num1 = Num2;
	Num2 = Temp;
}

void Print2Numbers(float Num1, float Num2)
{
	cout << endl;
	cout << "The First Number is: " << Num1 << endl;
	cout << "The Second Number is: " << Num2 << endl;
}

int main()
{
	float Num1, Num2;
	Read2Numbers(Num1, Num2);		// you could also do it with array or structs
	Print2Numbers(Num1, Num2); // Print
	Swap2Numbes(Num1, Num2);   // Swap
	Print2Numbers(Num1, Num2); // Print
}
