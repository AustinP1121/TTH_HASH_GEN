/*
	TTH_HASH_FUNCTS

	Project 1
	CS-480
	Austin Pedigo

	Description:
		Provides the functionality of the TTH hash function.
*/

#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <regex>

using namespace std;

int LetterToNumber(char);

//method to convert the letter to a number
int LetterToNumber(char letter)
{
	int letterIndex = -1;

	string letterString(1, letter);

	//lookup dictionary for each letter
	map<char, int> letterMap;

	letterMap =
	{
		{'a', 0}, {'b', 1}, {'c', 2},
		{'d', 3 }, { 'e', 4 }, { 'f', 5 },
		{'g', 6 }, {'h', 7 }, {'i', 8 },
		{'j', 9 }, { 'k', 10 }, { 'l', 11 },
		{'m', 12 }, { 'n', 13 }, { 'o', 14 },
		{'p', 15 }, { 'q', 16 }, { 'r', 17 },
		{'s', 18 }, { 't', 19 }, { 'u', 20 },
		{'v', 21 }, { 'w', 22 }, { 'x', 23 },
		{'y', 24 }, {'z', 25}
	};
	
	if (regex_match(letterString, regex("[A-Za-z]")))
	{
		letter = tolower(letter);

		letterIndex = letterMap[letter];
	}
	
	/* will return -1 if the piped letter
	is not a member of the alphabet */
	return letterIndex;
}
