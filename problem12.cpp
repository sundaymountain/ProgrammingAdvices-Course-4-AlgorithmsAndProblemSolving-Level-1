//Problem #12: Write a program to ask the user to enter two Numbers, Then Print the Max Number.
#include <iostream>
using namespace std;

void Read2Numbers(float& Num1, float& Num2)
{
	cout << "Enter the first Number: ";
	cin >> Num1;

	cout << "Enter the second Number: ";
	cin >> Num2;
} 

float MaxOf2Numbers(float Num1, float Num2)
{
	if (Num1 > Num2)
		return Num1;
	else
		return Num2;
}

void PrintResultOfMax(float Max)
{
	cout << "The Maximum Number is : " << Max << endl;
}

int main()
{
	float Num1, Num2;
	Read2Numbers(Num1, Num2);		// you could also do it with array or structs
	PrintResultOfMax(MaxOf2Numbers(Num1, Num2));
}
