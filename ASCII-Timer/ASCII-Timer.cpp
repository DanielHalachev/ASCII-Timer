

#include <iostream>
#include <Windows.h>//to remove Console text
using namespace std;
void setupConsole(int width, int height)
{
    HWND console = GetConsoleWindow();
    RECT r;
    GetWindowRect(console, &r); //stores the console's current dimensions

    MoveWindow(console, r.left, r.top, width, height, TRUE);
}
void windowsClear()
{
    COORD topLeft = { 0, 0 };
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO screen;
    DWORD written;

    GetConsoleScreenBufferInfo(console, &screen);
    FillConsoleOutputCharacterA(
        console, ' ', screen.dwSize.X * screen.dwSize.Y, topLeft, &written
    );
    FillConsoleOutputAttribute(
        console, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE,
        screen.dwSize.X * screen.dwSize.Y, topLeft, &written
    );
    SetConsoleCursorPosition(console, topLeft);
    return;
}
void clear()
{
#if defined _WIN32
    windowsClear();
    //clrscr(); // including header file : conio.h
#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    system("clear");
    //std::cout<< u8"\033[2J\033[1;1H"; //Using ANSI Escape Sequences 
#elif defined (__APPLE__)
    system("clear");
#endif
}
void printOne(int lineNumber)
{
    switch (lineNumber)
    {
        case 1 :cout << "       111"; break;
        case 2 :cout << "      1111"; break;
        case 3 :cout << "     11 11"; break;
        case 4 :cout << "    11  11"; break;
        case 5 :cout << "   11   11"; break;
        case 6 :cout << "        11"; break;
        case 7 :cout << "        11"; break;
        case 8 :cout << "        11"; break;
        case 9 :cout << "        11"; break;
        case 10:cout << "        11"; break;
        case 11:cout << "        11"; break;
    }
    return;
}
void printTwo(int lineNumber)
{
    switch (lineNumber)
    {
    case 1 :cout << "222222222 "; break;
    case 2 :cout << "        22"; break;
    case 3 :cout << "         2"; break;
    case 4 :cout << "         2"; break;
    case 5 :cout << "        22"; break;
    case 6 :cout << " 22222222 "; break;
    case 7 :cout << "22        "; break;
    case 8 :cout << "2         "; break;
    case 9 :cout << "2         "; break;
    case 10:cout << "2         "; break;
    case 11:cout << "2222222222"; break;
    }
    return;
}
void printThree(int lineNumber)
{
    switch (lineNumber)
    {
    case 1 :cout << "333333333 "; break;
    case 2 :cout << "        33"; break;
    case 3 :cout << "         3"; break;
    case 4 :cout << "         3"; break;
    case 5 :cout << "         3"; break;
    case 6 :cout << "3333333333"; break;
    case 7 :cout << "        33"; break;
    case 8 :cout << "         3"; break;
    case 9 :cout << "         3"; break;
    case 10:cout << "        33"; break;
    case 11:cout << "333333333 "; break;
    }
    return;
}
void printFour(int lineNumber)
{
    switch (lineNumber)
    {
    case 1 :cout << "4        4"; break;
    case 2 :cout << "4        4"; break;
    case 3 :cout << "4        4"; break;
    case 4 :cout << "4        4"; break;
    case 5 :cout << "4        4"; break;
    case 6 :cout << "4444444444"; break;
    case 7 :cout << "         4"; break;
    case 8 :cout << "         4"; break;
    case 9 :cout << "         4"; break;
    case 10:cout << "         4"; break;
    case 11:cout << "         4"; break;
    }
    return;
}
void printFive(int lineNumber)
{
    switch (lineNumber)
    {
    case 1 :cout << "5555555555"; break;
    case 2 :cout << "55        "; break;
    case 3 :cout << "5         "; break;
    case 4 :cout << "5         "; break;
    case 5 :cout << "55        "; break;
    case 6 :cout << " 55555555 "; break;
    case 7 :cout << "        55"; break;
    case 8 :cout << "         5"; break;
    case 9 :cout << "         5"; break;
    case 10:cout << "        55"; break;
    case 11:cout << "555555555 "; break;
    }
    return;
}
void printSix(int lineNumber)
{
    switch (lineNumber)
    {
    case 1 :cout << " 666666666"; break;
    case 2 :cout << "66        "; break;
    case 3 :cout << "6         "; break;
    case 4 :cout << "6         "; break;
    case 5 :cout << "66        "; break;
    case 6 :cout << "6666666666"; break;
    case 7 :cout << "66      66"; break;
    case 8 :cout << "6        6"; break;
    case 9 :cout << "6        6"; break;
    case 10:cout << "66      66"; break;
    case 11:cout << " 66666666 "; break;
    }
    return;
}
void printSeven(int lineNumber)
{
    switch (lineNumber)
    {
    case 1 :cout << "7777777777"; break;
    case 2 :cout << "        77"; break;
    case 3 :cout << "        77"; break;
    case 4 :cout << "       77 "; break;
    case 5 :cout << "       77 "; break;
    case 6 :cout << "      77  "; break;
    case 7 :cout << "      77  "; break;
    case 8 :cout << "     77   "; break;
    case 9 :cout << "     77   "; break;
    case 10:cout << "    77    "; break;
    case 11:cout << "    77    "; break;
    }
    return;
}
void printEight(int lineNumber)
{
    switch (lineNumber)
    {
    case 1 :cout << " 88888888 "; break;
    case 2 :cout << "88      88"; break;
    case 3 :cout << "8        8"; break;
    case 4 :cout << "8        8"; break;
    case 5 :cout << "88      88"; break;
    case 6 :cout << " 88888888 "; break;
    case 7 :cout << "88      88"; break;
    case 8 :cout << "8        8"; break;
    case 9 :cout << "8        8"; break;
    case 10:cout << "88      88"; break;
    case 11:cout << " 88888888 "; break;
    }
    return;
}
void printNine(int lineNumber)
{
    switch (lineNumber)
    {
    case 1 :cout << " 99999999 "; break;
    case 2 :cout << "99      99"; break;
    case 3 :cout << "9        9"; break;
    case 4 :cout << "9        9"; break;
    case 5 :cout << "99      99"; break;
    case 6 :cout << " 999999999"; break;
    case 7 :cout << "        99"; break;
    case 8 :cout << "         9"; break;
    case 9 :cout << "         9"; break;
    case 10:cout << "        99"; break;
    case 11:cout << "999999999 "; break;
    }
    return;
}
void printZero(int lineNumber)
{
    switch (lineNumber)
    {
    case 1 :cout << " 00000000 "; break;
    case 2 :cout << "00      00"; break;
    case 3 :cout << "0        0"; break;
    case 4 :cout << "0        0"; break;
    case 5 :cout << "0        0"; break;
    case 6 :cout << "0        0"; break;
    case 7 :cout << "0        0"; break;
    case 8 :cout << "0        0"; break;
    case 9 :cout << "0        0"; break;
    case 10:cout << "00      00"; break;
    case 11:cout << " 00000000 "; break;
    }
    return;
}
int getMinutes(int totalSeconds)
{
    if (totalSeconds < 0) return -1;
    return totalSeconds / 60;
}
int getSeconds(int totalSeconds)
{
    return totalSeconds - getMinutes(totalSeconds)*60;
}
void printLine(int number, int lineNumber)
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
}
void printNumber(int minutes, int seconds)
{

}
int main()
{
    //setupConsole(2000, 300);
    int numberOfSeconds = 0;
    do
    {
        cout << "Enter number of seconds to count-down: ";
        cin >> numberOfSeconds;
    } 
    while (numberOfSeconds < 0);
    clear();
    for (int i = 1; i < 12; i++)
    {
        printOne(i);
        cout << "    ";
        printTwo(i);
        cout << "    ";
        printThree(i);
        cout << "    ";
        printFour(i);
        cout << "    ";
        cout << endl;
    }
}