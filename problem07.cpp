//Problem #7: Write a program to ask the user to enter a Number, then Print "Half of <Number> is <???>".
#include <iostream>
#include <string>
using namespace std;

float ReadNumber()
{
	float Num;
	
	cout << "Enter a number: ";
	cin >> Num;

	return Num;
}

float CalculateHalfNumber(float Num)
{
	return (Num / 2);
}


void PrintHalfNumber(float Num)
{
	string Result = "Half of " + to_string(Num) + " is: " + to_string(CalculateHalfNumber(Num));
	cout << Result << endl;
}

int main()
{
	PrintHalfNumber(ReadNumber());
}
