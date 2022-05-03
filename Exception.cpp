/*
Michael Hughes
CIS 1202 101
05/02/2022
*/

#include<iostream>
#include<algorithm>

using namespace std;

char Character(char start, int offset);

template<typename N>
void Validate(N cr)
{
	string invalidCharacterException = "\nError: must be a character A-Z... re-enter: ";
	string invalidRangeException = "\nError: must be a letter... re-enter";

	if (!isalpha(cr))
	{
		throw invalidCharacterException;
	}
	
}

int main()
{
	char start;
	int offset = 0;

	try
	{
		cout << "\nEnter a letter: ";
		cin >> start;

		Validate(start);

		cout << "\nEnter an offset (integer): ";
		cin >> offset;
	}
	catch (string invalidCharacterException)
	{
		cout << invalidCharacterException;
	}

	char end = Character(start, offset);

	cout << "\nYou start at " << start << " with an offset of " << offset;
	cout << "\nYou end at " << end;
}

char Character(char start, int offset)
{
	char end;

	end = start + offset;


	return end;
}