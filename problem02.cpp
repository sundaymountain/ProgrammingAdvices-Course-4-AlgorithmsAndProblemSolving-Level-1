//Problem #2: Write a program to ask the user to enter his/her name and print it on screen. (Nothing Changed)
#include <iostream>
#include <string>			//to use to_string() and stoi()... we've to include the string library

using namespace std;

string ReadName()
{
	string Name;
	cout << "Enter your name : ";

	// Only clear if there's leftover input
	if (cin.peek() == '\n') {
		cin.ignore(); // Remove just the newline
	}

	getline(cin, Name);
	return Name;
}
void PrintName(string Name)
{
	cout << "Your name is: " << Name << endl;
}
int main()
{
	PrintName(ReadName());
}
