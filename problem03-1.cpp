//Problem #3: Write a program to ask the user to enter a number, then Print "Odd" if it's odd, Or "Even" if it's even
#include <iostream>
using namespace std;

enum enNumberType { Odd = 1, Even = 2 };

int ReadNumber()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;
	return number;
}
enNumberType CheckOddOrEven(int Num)
{
	if (Num % 2 == 0)
		return enNumberType::Even;
	else
		return enNumberType::Odd;
}
void PrintOddOrEven(enNumberType NumberType)
{
	if (NumberType == Even)
		cout << "Number is Even";
	else
		cout << "Number is Odd";
}

int main()
{
	PrintOddOrEven(CheckOddOrEven(ReadNumber()));
}
