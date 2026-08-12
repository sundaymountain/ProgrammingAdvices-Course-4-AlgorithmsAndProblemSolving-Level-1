//Problem #6: Write a program to ask the user to enter his/her: First Name, Last Name. Then Print the Full Name.
//Problem #6 (before checking Dr's solution); just for learning by trying to mimic his style of divide & conquer)
#include <iostream>
using namespace std;

struct stInfo
{
	string FirstName;
	string LastName;
};

stInfo ReadInfo()
{
	stInfo Info;

	cout << "Enter your First Name: ";
	cin >> Info.FirstName;

	cout << "Enter your Last Name: ";
	cin >> Info.LastName;

	return Info;
}

void PrintInfo(stInfo Info)
{
	cout << "Full Name is : " << Info.FirstName << " " << Info.LastName << endl;
}

int main()
{
	PrintInfo(ReadInfo());
}
