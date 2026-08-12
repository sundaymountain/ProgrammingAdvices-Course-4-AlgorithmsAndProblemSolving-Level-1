//Problem #9: Write a program to ask the user to enter 3 Numbers, then Print the Sum of entered numbers.
#include <iostream>
using namespace std;

void Read3Num(int& Num1, int& Num2, int& Num3)
{
	cout << "enter the first number: ";
	cin >> Num1;

	cout << "enter the second number: ";
	cin >> Num2;

	cout << "enter the third number: ";
	cin >> Num3; 
} 

int SumOf3Num(int Num1, int Num2, int Num3)
{
	return (Num1 + Num2 + Num3);
}

void PrintSum(int Sum)
{
	cout << "Total sum of Numbers: " << Sum << endl;
}

int main()
{
	int Num1, Num2, Num3;
	Read3Num(Num1, Num2, Num3);
	PrintSum(SumOf3Num(Num1, Num2, Num3));
}
