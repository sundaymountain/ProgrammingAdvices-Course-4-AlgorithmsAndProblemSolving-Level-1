//Problem #4: Write a program to ask the user to enter his/her: Age, Driver license. Then Print "Hired" if his/her age is grater than 21 and s/he has a driver license, otherwise Print "Rejected"
// There is a better
#include <iostream>
using namespace std;

struct stInfo
{
	short Age;
	bool HasDriverLicense;
};

stInfo ReadInfo()
{
	stInfo Info;
	cout << "Enter your Age: ";
	cin >> Info.Age;
	cout << "Do you have a driver License (0=no, 1=yes): ";
	cin >> Info.HasDriverLicense;
	return Info;
}

void PrintResult(stInfo Info)
{
	bool Result = (Info.Age > 21 && Info.HasDriverLicense);
	if (Result)
		cout << "Hired." << endl;
	else
		cout << "Rejected." << endl;
}

int main()
{
	PrintResult(ReadInfo());
}
