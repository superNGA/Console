#pragma once
#define _CRT_SECURE_NO_WARNINGS


#include <Windows.h>
#include <iostream>
#include <chrono>
#include <ctime>

//Macros for TextColors
#define FG_BLACK	30
#define FG_RED		31
#define FG_GREEN	32
#define FG_YELLOW	33
#define FG_BLUE		34
#define FG_MAGENTA	35
#define FG_CYAN		36
#define FG_WHITE	37

//Background color macros
#define BG_BLACK	40
#define BG_RED		41
#define BG_GREEN	42
#define BG_YELLOW	43
#define BG_BLUE		44
#define BG_MAGENTA	45
#define BG_CYAN		46
#define BG_WHITE	47

//Text format marcros
#define NORMAL		0
#define BOLD		1
#define UNDERLINE	4

class Console_System
{
public:
	//Constructors
	Console_System();
	Console_System(int8_t TextColor, int8_t Format, int8_t BackgroundColor);

	//Creating and freeing Console
	bool CreateNewConsole();
	bool FreeConsoleInstance();

	//Other Functionality
	void DoDevider();
	void DoIntroduction(); //types out creaters name in big letters
	void FastLog(const char* FastLogMessage); //fast meessage printing
	void Log(const char* LogMessage, int8_t TextColor = FG_WHITE, int8_t Format = NORMAL, int8_t BackgroundColor = BG_BLACK); // prints message

private:
	int8_t D_TextColor			= FG_WHITE;
	int8_t D_BackgroundColor	= BG_BLACK;
	int8_t D_Format				= NORMAL;
};