/*

Description: Will count the number of instances of a selected letter within a given string.
Filename: main
Author: Daniel Bentley
bentleyd@vvc.edu
10/18/2018

*/

#include <iostream>
#include <string>
using namespace std;

void GetString(string &input, char &c);
void CharCount(string input, char c, int &count);
void Output(string input, char c, int count);

int main()
{
	string input = "";
	char c = ' ';
	int count = 0;

	GetString(input, c);
	CharCount(input, c, count);
	Output(input, c, count);

	return 0;
}

void GetString(string &input, char &c)
{
	cout << "This program will count the number of a specified character in a given sentence." << endl << "Please enter a sentence:" << endl;
	getline(cin, input);
	cout << "Now enter the character you wish to search for:" << endl;
	cin >> c;
}

void CharCount(string input, char c, int &count)
{
	for(int i = 0; i < input.length(); i++)
	{
		if(input.at(i) == c)
		{
			count++;
		}
	}
}

void Output(string input, char c, int count)
{
	cout << "The given sentence was: " << input << endl
		<< "The chosen character was: " << c << endl
		<< "Which appeared in the given sentence " << count << " times." << endl;
}
