//Problem #5: Write a program to ask the user to enter his/her: Age, Driver license, Has Recommendation!
//Then Print "Hired" if his/her age is grater than 21 and s/he has a driver license, otherwise Print "Rejected"
//Or Hire him/her without the above conditions if s/he has a Recommendation..
#include <iostream>
using namespace std;

struct stInfo
{
	short Age;
	bool HasDriverLicense;
	bool HasRecommendation;
};

stInfo ReadInfo()
{
	stInfo Info;

	cout << "Enter your Age: ";
	cin >> Info.Age;

	cout << "Do you have a driver License (0=no, 1=yes): ";
	cin >> Info.HasDriverLicense;

	cout << "Do you have a Recommendation? (0=no, 1=yes): ";
	cin >> Info.HasRecommendation;

	return Info;
}

bool isAccepted(stInfo Info)
{
	return ((Info.Age > 21 && Info.HasDriverLicense) || Info.HasRecommendation);
}

void PrintResult(stInfo Info)
{
	if (isAccepted(Info))
		cout << "Hired." << endl;
	else
		cout << "Rejected." << endl;
}

int main()
{
	PrintResult(ReadInfo());
}
