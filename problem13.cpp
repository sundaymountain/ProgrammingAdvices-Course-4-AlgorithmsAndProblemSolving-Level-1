//Problem #13: Write a program to ask the user to enter 3 Numbers, Then Print the Max Number.
#include <iostream>
using namespace std;

void Read3Numbers(float& Num1, float& Num2, float& Num3)
{
	cout << "Enter the first Number: ";
	cin >> Num1;

	cout << "Enter the second Number: ";
	cin >> Num2;

	cout << "Enter the third Number: ";
	cin >> Num3;

} 

float MaxOf3Numbers(float Num1, float Num2, float Num3)
{
	if (Num1 > Num2)
		if (Num1 > Num3)
			return Num1;
		else
			return Num3;
	else if (Num2 > Num3)
		return Num2;
	else
		return Num3;
}

void PrintResultOfMax(float Max)
{
	cout << "The Maximum Number is : " << Max << endl;
}

int main()
{
	float Num1, Num2, Num3;
	Read3Numbers(Num1, Num2, Num3);		// you could also do it with array or structs
	PrintResultOfMax(MaxOf3Numbers(Num1, Num2, Num3));
}
