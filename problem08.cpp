//Problem #8: Write a program to ask the user to enter a Mark, then Print "Pass" if Mark ≥ 50, otherwise Print "Fail".
// mimicing the clean style with the approach of divide & conquer while using the primitive programming concepts in c++
// there is better
#include <iostream>
using namespace std;

float ReadMark()
{
	float Mark;
	
	cout << "Enter a mark: ";
	cin >> Mark;

	return Mark;
}

bool isPassed(float Mark)
{
	if (Mark >= 50)
		return true;
	else
		return false;
}


void PrintPassResult(bool isPassed)
{
	if (isPassed)
		cout << "Pass." << endl;
	else
		cout << "Fail." << endl;
}

int main()
{
	PrintPassResult(isPassed(ReadMark()));
}
