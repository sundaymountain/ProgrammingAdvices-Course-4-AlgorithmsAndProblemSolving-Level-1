//Problem #8: Write a program to ask the user to enter a Mark, then Print "Pass" if Mark ≥ 50, otherwise Print "Fail".
#include <iostream>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

float ReadMark()
{
	float Mark;
	
	cout << "Enter a mark: ";
	cin >> Mark;

	return Mark;
}

enPassFail CheckMark(float Mark)
{
	if (Mark >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}


void PrintPassResult(float Mark)
{
	if (CheckMark(Mark) == enPassFail::Pass)
		cout << "Pass." << endl;
	else
		cout << "Fail." << endl;
}

int main()
{
	PrintPassResult(ReadMark());
}
