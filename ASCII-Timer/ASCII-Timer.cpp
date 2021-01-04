/**
*
* Solution to course project # 10
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2020/2021
*
* @author Daniel Halachev
* @idnumber 62547
* @compiler VC
*
* <main executable code>
*
*/

#include <iostream>
#include <Windows.h>
using namespace std;
void setConsoleSize(int& width, int& height)
{
#if defined(_WIN32)
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
	width = (int)(csbi.dwSize.X);
	height = (int)(csbi.dwSize.Y);
#elif defined(__linux__)
	struct winsize w;
	ioctl(fileno(stdout), TIOCGWINSZ, &w);
	width = (int)(w.ws_col);
	height = (int)(w.ws_row);
#endif 
}
void setupConsole(int width, int height)
{
	//set size in rows and columns
	setConsoleSize(width, height);
	//prevent the user from resizing the console in order to fuck things up
	HWND consoleWindow = GetConsoleWindow();
	SetWindowLong(consoleWindow, GWL_STYLE, GetWindowLong(consoleWindow, GWL_STYLE) & ~WS_MAXIMIZEBOX & ~WS_SIZEBOX);
}
void disableInput()
{
	DWORD prev_mode;
	GetConsoleMode(GetStdHandle(STD_INPUT_HANDLE), &prev_mode);
	SetConsoleMode(GetStdHandle(STD_INPUT_HANDLE), ENABLE_EXTENDED_FLAGS |
		(prev_mode & ~ENABLE_QUICK_EDIT_MODE));
}
void enableInput()
{
	DWORD prev_mode;
	GetConsoleMode(GetStdHandle(STD_INPUT_HANDLE), &prev_mode);
	SetConsoleMode(GetStdHandle(STD_INPUT_HANDLE), ENABLE_QUICK_EDIT_MODE | ENABLE_EXTENDED_FLAGS);
}
void clear()
{
#if defined _WIN32
	system("cls");
#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
	system("clear");
#elif defined (__APPLE__)
	system("clear");
#endif
}
void longBeep()
{
#if defined(_WIN32)
	Beep(750, 1500);
#elif defined(__linux__)
	cout << \a << \a << \a << \a << \a << \a << \a;
#endif 
}
int getMinutes(int totalSeconds)
{
	if (totalSeconds < 0) return -1;
	return totalSeconds / 60;
}
int getSeconds(int totalSeconds)
{
	return totalSeconds - getMinutes(totalSeconds) * 60;
}
#pragma region NumberPrintingFuctions
void printOne(int lineNumber)
{
	switch (lineNumber)
	{
	case 1:cout << "      111 "; break;
	case 2:cout << "     1111 "; break;
	case 3:cout << "    11 11 "; break;
	case 4:cout << "   11  11 "; break;
	case 5:cout << "  11   11 "; break;
	case 6:cout << "       11 "; break;
	case 7:cout << "       11 "; break;
	case 8:cout << "       11 "; break;
	case 9:cout << "       11 "; break;
	case 10:cout << "       11 "; break;
	case 11:cout << "       11 "; break;
	}
	return;
}
void printTwo(int lineNumber)
{
	switch (lineNumber)
	{
	case 1:cout << "222222222 "; break;
	case 2:cout << "        22"; break;
	case 3:cout << "         2"; break;
	case 4:cout << "         2"; break;
	case 5:cout << "        22"; break;
	case 6:cout << " 22222222 "; break;
	case 7:cout << "22        "; break;
	case 8:cout << "2         "; break;
	case 9:cout << "2         "; break;
	case 10:cout << "2         "; break;
	case 11:cout << "2222222222"; break;
	}
	return;
}
void printThree(int lineNumber)
{
	switch (lineNumber)
	{
	case 1:cout << "333333333 "; break;
	case 2:cout << "        33"; break;
	case 3:cout << "         3"; break;
	case 4:cout << "         3"; break;
	case 5:cout << "         3"; break;
	case 6:cout << "3333333333"; break;
	case 7:cout << "        33"; break;
	case 8:cout << "         3"; break;
	case 9:cout << "         3"; break;
	case 10:cout << "        33"; break;
	case 11:cout << "333333333 "; break;
	}
	return;
}
void printFour(int lineNumber)
{
	switch (lineNumber)
	{
	case 1:cout << "4        4"; break;
	case 2:cout << "4        4"; break;
	case 3:cout << "4        4"; break;
	case 4:cout << "4        4"; break;
	case 5:cout << "4        4"; break;
	case 6:cout << "4444444444"; break;
	case 7:cout << "         4"; break;
	case 8:cout << "         4"; break;
	case 9:cout << "         4"; break;
	case 10:cout << "         4"; break;
	case 11:cout << "         4"; break;
	}
	return;
}
void printFive(int lineNumber)
{
	switch (lineNumber)
	{
	case 1:cout << "5555555555"; break;
	case 2:cout << "55        "; break;
	case 3:cout << "5         "; break;
	case 4:cout << "5         "; break;
	case 5:cout << "55        "; break;
	case 6:cout << " 55555555 "; break;
	case 7:cout << "        55"; break;
	case 8:cout << "         5"; break;
	case 9:cout << "         5"; break;
	case 10:cout << "        55"; break;
	case 11:cout << "555555555 "; break;
	}
	return;
}
void printSix(int lineNumber)
{
	switch (lineNumber)
	{
	case 1:cout << " 666666666"; break;
	case 2:cout << "66        "; break;
	case 3:cout << "6         "; break;
	case 4:cout << "6         "; break;
	case 5:cout << "66        "; break;
	case 6:cout << "6666666666"; break;
	case 7:cout << "66      66"; break;
	case 8:cout << "6        6"; break;
	case 9:cout << "6        6"; break;
	case 10:cout << "66      66"; break;
	case 11:cout << " 66666666 "; break;
	}
	return;
}
void printSeven(int lineNumber)
{
	switch (lineNumber)
	{
	case 1:cout << "7777777777"; break;
	case 2:cout << "        77"; break;
	case 3:cout << "        77"; break;
	case 4:cout << "       77 "; break;
	case 5:cout << "       77 "; break;
	case 6:cout << "      77  "; break;
	case 7:cout << "      77  "; break;
	case 8:cout << "     77   "; break;
	case 9:cout << "     77   "; break;
	case 10:cout << "    77    "; break;
	case 11:cout << "    77    "; break;
	}
	return;
}
void printEight(int lineNumber)
{
	switch (lineNumber)
	{
	case 1:cout << " 88888888 "; break;
	case 2:cout << "88      88"; break;
	case 3:cout << "8        8"; break;
	case 4:cout << "8        8"; break;
	case 5:cout << "88      88"; break;
	case 6:cout << " 88888888 "; break;
	case 7:cout << "88      88"; break;
	case 8:cout << "8        8"; break;
	case 9:cout << "8        8"; break;
	case 10:cout << "88      88"; break;
	case 11:cout << " 88888888 "; break;
	}
	return;
}
void printNine(int lineNumber)
{
	switch (lineNumber)
	{
	case 1:cout << " 99999999 "; break;
	case 2:cout << "99      99"; break;
	case 3:cout << "9        9"; break;
	case 4:cout << "9        9"; break;
	case 5:cout << "99      99"; break;
	case 6:cout << " 999999999"; break;
	case 7:cout << "        99"; break;
	case 8:cout << "         9"; break;
	case 9:cout << "         9"; break;
	case 10:cout << "        99"; break;
	case 11:cout << "999999999 "; break;
	}
	return;
}
void printZero(int lineNumber)
{
	switch (lineNumber)
	{
	case 1:cout << " 00000000 "; break;
	case 2:cout << "00      00"; break;
	case 3:cout << "0        0"; break;
	case 4:cout << "0        0"; break;
	case 5:cout << "0        0"; break;
	case 6:cout << "0        0"; break;
	case 7:cout << "0        0"; break;
	case 8:cout << "0        0"; break;
	case 9:cout << "0        0"; break;
	case 10:cout << "00      00"; break;
	case 11:cout << " 00000000 "; break;
	}
	return;
}
#pragma endregion NumberPrintingFuctions
void printNumber(int number, int lineNumber)
{
	switch (number)
	{
	case 1:printOne(lineNumber); break;
	case 2:printTwo(lineNumber); break;
	case 3:printThree(lineNumber); break;
	case 4:printFour(lineNumber); break;
	case 5:printFive(lineNumber); break;
	case 6:printSix(lineNumber); break;
	case 7:printSeven(lineNumber); break;
	case 8:printEight(lineNumber); break;
	case 9:printNine(lineNumber); break;
	case 0:printZero(lineNumber); break;
	}
	return;
}
void printClockFiveDigits(string sideDistanceStr, string distBetweenNumsStr,
	int minFirstDigit, int minSecondDigit, int minThirdDigit,
	int secFirstDigit, int secSecondDigit)
{
	//due to the min-sec separator being one sign, side distances are not equal
	//we use '\b' to fit inside the console width limit

	//Split the 11-iterations for cycle in order to omit 11 "if" checks
	//whether the lines are '5' or '7', where the min-sec separator is
	for (int i = 1; i < 5; i++)
	{
		cout << sideDistanceStr << '\b';
		printNumber(minFirstDigit, i);
		cout << distBetweenNumsStr;
		printNumber(minSecondDigit, i);
		cout << distBetweenNumsStr;
		printNumber(minThirdDigit, i);
		cout << distBetweenNumsStr;
		cout << " ";
		cout << distBetweenNumsStr;
		printNumber(secFirstDigit, i);
		cout << distBetweenNumsStr;
		printNumber(secSecondDigit, i);
		cout << sideDistanceStr;
	}

	//print line 5 because it contains the min-sec separator
	cout << sideDistanceStr << '\b';
	printNumber(minFirstDigit, 5);
	cout << distBetweenNumsStr;
	printNumber(minSecondDigit, 5);
	cout << distBetweenNumsStr;
	printNumber(minThirdDigit, 5);
	cout << distBetweenNumsStr;
	cout << "#";
	cout << distBetweenNumsStr;
	printNumber(secFirstDigit, 5);
	cout << distBetweenNumsStr;
	printNumber(secSecondDigit, 5);
	cout << sideDistanceStr;

	//line 6 is normal -->Print it
	cout << sideDistanceStr << '\b';
	printNumber(minFirstDigit, 6);
	cout << distBetweenNumsStr;
	printNumber(minSecondDigit, 6);
	cout << distBetweenNumsStr;
	printNumber(minThirdDigit, 6);
	cout << distBetweenNumsStr;
	cout << " ";
	cout << distBetweenNumsStr;
	printNumber(secFirstDigit, 6);
	cout << distBetweenNumsStr;
	printNumber(secSecondDigit, 6);
	cout << sideDistanceStr;

	//Print line 7 because it contains the min-sec separator symbol
	cout << sideDistanceStr << '\b';
	printNumber(minFirstDigit, 7);
	cout << distBetweenNumsStr;
	printNumber(minSecondDigit, 7);
	cout << distBetweenNumsStr;
	printNumber(minThirdDigit, 7);
	cout << distBetweenNumsStr;
	cout << "#";
	cout << distBetweenNumsStr;
	printNumber(secFirstDigit, 7);
	cout << distBetweenNumsStr;
	printNumber(secSecondDigit, 7);
	cout << sideDistanceStr;

	//Lines 8-11 are normal --> Print them
	for (int i = 8; i < 12; i++)
	{
		cout << sideDistanceStr << '\b';
		printNumber(minFirstDigit, i);
		cout << distBetweenNumsStr;
		printNumber(minSecondDigit, i);
		cout << distBetweenNumsStr;
		printNumber(minThirdDigit, i);
		cout << distBetweenNumsStr;
		cout << " ";
		cout << distBetweenNumsStr;
		printNumber(secFirstDigit, i);
		cout << distBetweenNumsStr;
		printNumber(secSecondDigit, i);
		cout << sideDistanceStr;
	}
	return;
}
void printClockFourDigits(string sideDistanceStr, string distBetweenNumsStr,
	int minSecondDigit, int minThirdDigit,
	int secFirstDigit, int secSecondDigit)
{
	//due to the min-sec separator being one sign, side distances are not equal
	//we use '\b' to fit inside the console width limit

	//Split the 11-iterations for cycle in order to omit 11 "if" checks
	//whether the lines are '5' or '7', where the min-sec separator is
	//Lines 1-4 are normal --> Print them
	for (int i = 1; i < 5; i++)
	{
		cout << sideDistanceStr;
		printNumber(minSecondDigit, i);
		cout << distBetweenNumsStr;
		printNumber(minThirdDigit, i);
		cout << distBetweenNumsStr;
		cout << " ";
		cout << distBetweenNumsStr;
		printNumber(secFirstDigit, i);
		cout << distBetweenNumsStr;
		printNumber(secSecondDigit, i);
		cout << sideDistanceStr << '\b';
	}

	//print line 5 because it contains the min-sec separator
	cout << sideDistanceStr;
	printNumber(minSecondDigit, 5);
	cout << distBetweenNumsStr;
	printNumber(minThirdDigit, 5);
	cout << distBetweenNumsStr;
	cout << "#";
	cout << distBetweenNumsStr;
	printNumber(secFirstDigit, 5);
	cout << distBetweenNumsStr;
	printNumber(secSecondDigit, 5);
	cout << sideDistanceStr << '\b';

	//line 6 is normal -->Print it
	cout << sideDistanceStr;
	printNumber(minSecondDigit, 6);
	cout << distBetweenNumsStr;
	printNumber(minThirdDigit, 6);
	cout << distBetweenNumsStr;
	cout << " ";
	cout << distBetweenNumsStr;
	printNumber(secFirstDigit, 6);
	cout << distBetweenNumsStr;
	printNumber(secSecondDigit, 6);
	cout << sideDistanceStr << '\b';

	//Print line 7 because it contains the min-sec separator symbol
	cout << sideDistanceStr;
	printNumber(minSecondDigit, 7);
	cout << distBetweenNumsStr;
	printNumber(minThirdDigit, 7);
	cout << distBetweenNumsStr;
	cout << "#";
	cout << distBetweenNumsStr;
	printNumber(secFirstDigit, 7);
	cout << distBetweenNumsStr;
	printNumber(secSecondDigit, 7);
	cout << sideDistanceStr << '\b';

	//Lines 8-11 are normal --> Print them
	for (int i = 8; i < 12; i++)
	{
		cout << sideDistanceStr;
		printNumber(minSecondDigit, i);
		cout << distBetweenNumsStr;
		printNumber(minThirdDigit, i);
		cout << distBetweenNumsStr;
		cout << " ";
		cout << distBetweenNumsStr;
		printNumber(secFirstDigit, i);
		cout << distBetweenNumsStr;
		printNumber(secSecondDigit, i);
		cout << sideDistanceStr << '\b';
	}
	return;
}
void printClockThreeDigits(string sideDistanceStr, string distBetweenNumsStr,
	int minThirdDigit, int secFirstDigit, int secSecondDigit)
{
	//due to the min-sec separator being one sign, side distances are not equal
	//we use '\b' to fit inside the console width limit

	//Split the 11-iterations for cycle in order to omit 11 "if" checks
	//whether the lines are '5' or '7', where the min-sec separator is
	//Lines 1-4 are normal --> Print them
	for (int i = 1; i < 5; i++)
	{
		cout << sideDistanceStr;
		printNumber(minThirdDigit, i);
		cout << distBetweenNumsStr;
		cout << " ";
		cout << distBetweenNumsStr;
		printNumber(secFirstDigit, i);
		cout << distBetweenNumsStr;
		printNumber(secSecondDigit, i);
		cout << sideDistanceStr << '\b';
	}

	//print line 5 because it contains the min-sec separator
	cout << sideDistanceStr;
	printNumber(minThirdDigit, 5);
	cout << distBetweenNumsStr;
	cout << "#";
	cout << distBetweenNumsStr;
	printNumber(secFirstDigit, 5);
	cout << distBetweenNumsStr;
	printNumber(secSecondDigit, 5);
	cout << sideDistanceStr << '\b';

	//line 6 is normal -->Print it
	cout << sideDistanceStr;
	printNumber(minThirdDigit, 6);
	cout << distBetweenNumsStr;
	cout << " ";
	cout << distBetweenNumsStr;
	printNumber(secFirstDigit, 6);
	cout << distBetweenNumsStr;
	printNumber(secSecondDigit, 6);
	cout << sideDistanceStr << '\b';

	//Print line 7 because it contains the min-sec separator symbol
	cout << sideDistanceStr;
	printNumber(minThirdDigit, 7);
	cout << distBetweenNumsStr;
	cout << "#";
	cout << distBetweenNumsStr;
	printNumber(secFirstDigit, 7);
	cout << distBetweenNumsStr;
	printNumber(secSecondDigit, 7);
	cout << sideDistanceStr << '\b';

	//Lines 8-11 are normal --> Print them
	for (int i = 8; i < 13; i++)
	{
		cout << sideDistanceStr;
		printNumber(minThirdDigit, i);
		cout << distBetweenNumsStr;
		cout << " ";
		cout << distBetweenNumsStr;
		printNumber(secFirstDigit, i);
		cout << distBetweenNumsStr;
		printNumber(secSecondDigit, i);
		cout << sideDistanceStr << '\b';
	}
	return;
}
void printClock(int totalSeconds, int distBetweenNums, int consoleWidth = 80, int consoleSymbolHeight = 25)
{
	int minutes = getMinutes(totalSeconds);
	int seconds = getSeconds(totalSeconds);
	int minFirstDigit = minutes / 100;
	int minSecondDigit = (minutes / 10) % 10;
	int minThirdDigit = minutes % 10;
	int secFirstDigit = seconds / 10;
	int secSecondDigit = seconds % 10;
	int sideDistance;
	string sideDistanceStr = " ";
	string distBetweenNumsStr = " ";
	//30, 40 or 50 is the total width of all timer digits in all three cases
	//determine the side distance
	if (minFirstDigit == 0)
	{
		//uncomment the following lines if the timer doesn't need to have four numbers
		/*if (minSecondDigit == 0)
		{
			sideDistance = (consoleWidth - 30 - 3 * distBetweenNums)/2;
		}
		else */
		sideDistance = (consoleWidth - 40 - 4 * distBetweenNums) / 2;
	}
	else sideDistance = (consoleWidth - 50 - 5 * distBetweenNums) / 2;
	for (int i = 1; i < sideDistance; i++)
	{
		sideDistanceStr = sideDistanceStr + " ";
	}
	//determine the distance between the timer digits
	for (int i = 1; i < distBetweenNums; i++)
	{
		distBetweenNumsStr = distBetweenNumsStr + " ";
	}
	//determine the distance above and below the timer digits
	for (int i = 0; i < (consoleSymbolHeight - 11) / 2; i++)
	{
		cout << endl;
	}
	//print the clock
	if (minFirstDigit == 0)
	{
		//uncomment the following lines if the timer doesn't have to be with four digits
		/*if (minSecondDigit == 0)
		{
			printClockThreeDigits(sideDistanceStr, distBetweenNumsStr, minThirdDigit, secFirstDigit, secSecondDigit);
		}
		else*/
		{
			printClockFourDigits(sideDistanceStr, distBetweenNumsStr, minSecondDigit, minThirdDigit, secFirstDigit, secSecondDigit);
		}
	}
	else
	{
		printClockFiveDigits(sideDistanceStr, distBetweenNumsStr, minFirstDigit, minSecondDigit, minThirdDigit, secFirstDigit, secSecondDigit);
	}
	return;
}
void performTimer(int totalSeconds, int distBetweenNums = 4, int consoleSymbolWidth = 80, int consoleSymbolHeight = 25)
{
	//disable mouse clicks and selections in order to avoid pausing
	disableInput();
	int i = totalSeconds;
	//countdown
	for (i; i > 9; i--)
	{
		printClock(i, distBetweenNums, consoleSymbolWidth, consoleSymbolHeight);
		cout << '\a';
		Sleep(1000);
		clear();
	}
	//break the cycle for the last 9 seconds
	//print the clock red and make short beeps
	//this way we avoid many "if" checks
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, FOREGROUND_RED);
	for (i = 9; i > 0; i--)
	{
		printClock(i, distBetweenNums, consoleSymbolWidth, consoleSymbolHeight);
		cout << '\a';
		Sleep(1000);
		clear();
	}
	//after finish, print out 00:00 and make a long beep
	string sideDistanceStr = " ";
	string distBetweenNumsStr = " ";
	//40 is the width of all four zeros
	//calculate the empty strings based on the function parameters
	int sideDistance = (consoleSymbolWidth - 40 - 4 * distBetweenNums) / 2;
	//determine the side distances
	for (int i = 1; i < sideDistance; i++)
	{
		sideDistanceStr = sideDistanceStr + " ";
	}
	//determine the distance between the timer digits
	for (int i = 1; i < distBetweenNums; i++)
	{
		distBetweenNumsStr = distBetweenNumsStr + " ";
	}
	//determine the distance above and below the timer digits
	for (int i = 0; i < (consoleSymbolHeight - 11) / 2; i++)
	{
		cout << endl;
	}
	printClockFourDigits(sideDistanceStr, distBetweenNumsStr, 0, 0, 0, 0);
	longBeep();
	//restore default console setting, 7 = white
	SetConsoleTextAttribute(hStdOut, 7);
	enableInput();
	return;
}
int main()
{
	int consoleSymbolWidth = 80;
	int consoleSymbolHeight = 25;
	int distanceBetweenNums = 4;
	setupConsole(80, 25);
	int numberOfSeconds = 0;
	do
	{
		cout << "Enter a valid number of seconds to count-down: ";
		cin >> numberOfSeconds;
	}
	while (numberOfSeconds < 999 || numberOfSeconds>9999);
	clear();
	performTimer(numberOfSeconds, distanceBetweenNums, consoleSymbolWidth);
	return 0;
}