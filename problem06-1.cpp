//Problem #6: Write a program to ask the user to enter his/her: First Name, Last Name. Then Print the Full Name.
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

string GetFullName(stInfo Info)
{
	return (Info.FirstName + " " + Info.LastName); // concatenation in one line!
	// a tip from ai .. Returning the concatenated expression directly is standard practice, clean, 
	// and highly efficient due to a compiler optimization called Return Value Optimization (RVO).
}

void PrintFullName(string FullName)
{
	cout << "Full Name is : " << FullName << endl;
}

int main()
{
	PrintFullName(GetFullName(ReadInfo()));
}
