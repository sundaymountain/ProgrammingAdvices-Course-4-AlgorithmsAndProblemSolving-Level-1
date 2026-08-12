//Problem #11: Write a program to ask the user to enter 3 Marks, then Print the Average of entered Marks, 
//Then Print "Pass" if Average ≥ 50 Print, otherwise Print "Fail".
#include <iostream>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

void Read3Marks(float& Mark1, float& Mark2, float& Mark3)
{
	cout << "Enter the first Mark: ";
	cin >> Mark1;

	cout << "Enter the second Mark: ";
	cin >> Mark2;

	cout << "Enter the third Mark ";
	cin >> Mark3; 
} 

float SumOf3Marks(float Mark1, float Mark2, float Mark3)
{
	return (Mark1 + Mark2 + Mark3);
}

float AverageOf3Mark(float Mark1, float Mark2, float Mark3)
{
	return SumOf3Marks(Mark1, Mark2, Mark3) / 3;
}

enPassFail CheckMark(float Mark)
{
	if (Mark >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PrintAverageMarkAndPassResult(float Average)
{
	cout << "The Average of the Marks: " << Average << endl;

	if (CheckMark(Average) == enPassFail::Pass)
		cout << "Pass." << endl;
	else
		cout << "Fail." << endl;

}

int main()
{
	float Mark1, Mark2, Mark3;
	Read3Marks(Mark1, Mark2, Mark3);
	PrintAverageMarkAndPassResult(AverageOf3Mark(Mark1, Mark2, Mark3));
}
