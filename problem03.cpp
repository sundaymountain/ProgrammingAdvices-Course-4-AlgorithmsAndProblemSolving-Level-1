//Problem #3: Write a program to ask the user to enter a number, then Print "Odd" if it's odd, Or "Even" if it's even
// There is a better
#include <iostream>

using namespace std;

int ReadNumber() {
	int number;
	cout << "Enter a number: ";
	cin >> number;
	return number;
}
bool CheckIfEven(int number) {
	if (number % 2 == 0) {
		return true;
	}
	else
	{
		return false;
	}
}
void PrintOddOrEven(bool isEven) {
	if (isEven)
	{
		cout << "Number is Even";
	}
	else
	{
		cout << "Number is False";
	}
}

int main()
{
	PrintOddOrEven(CheckIfEven(ReadNumber()));
}
