// Next-Leap-year.cpp : Program gives 20 leap years?
//

#include "stdafx.h"
#include<iostream>
#include<math.h>

int main()
{
	int Leapyear = 0;
	int Yearinput=0;
	int temp=0;
	int Start=0;
	int Pastyears = 0;

	std::cout << "Let's see if this is a Leap Year:";
	std::cin >> Yearinput;
		
		temp = ((abs(Yearinput - 2004)) % 4);
		Start = Yearinput + temp;

	if (temp=0)
			std::cout << "Yes, it is a Leap Year. \n";
	else
	{
		std::cout << "These are the Leap Years. \n ";

		for (int i = 1; i <= 10; i++)
		{
			Leapyear = Start + (4 * i);
			Pastyears = Start - (4 * i);

			std::cout << Pastyears << "\n";
				std::cout<< Leapyear << "\n";
			
		}
	}	
	return 0;
}

