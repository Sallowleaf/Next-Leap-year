// Next-Leap-year.cpp : Program gives 20 leap years?
//

#include "stdafx.h"
#include<iostream>

int main()
{
	int Leapyear=0;
	for (int i = 1; i <= 10; i++)
	{
		Leapyear = 2004 + (4 * i);
		std::cout << Leapyear << " \n";
		Leapyear = 0;
	}
    return 0;
}

