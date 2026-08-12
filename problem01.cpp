//Problem #1: Write a program to print your name on screen.
#include <iostream>
#include <string>			//string library to use to_string() and stoi().. 
using namespace std;

void PrintName(string Name)
{
	cout << "Your Name is: " << Name << endl;
}
int main()
{
	PrintName("Learner");
}
