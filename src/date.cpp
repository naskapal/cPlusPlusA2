#include <iostream>
#include "date.h"

using namespace std;
Date::Date()
{
	month = 0;
	date = 0;
	year = 0;
}

Date::Date(int aMonth, int aDate, int aYear)
{
	if (checkDate(aMonth,aDate,aYear))
	{
		month = aMonth;
		date = aDate;
		year = aYear;
	}
	else
	{
		month = 0;
		date = 0;
		year = 0;
	}
}

Date Date::compareDate(Date aDate, Date anotherDate){
	return Date();
}

bool Date::checkDate(int aMonth, int aDate, int aYear){
	if (aMonth == 1 || aMonth == 3 || aMonth == 5 || aMonth == 7 || aMonth == 8 || aMonth == 10 || aMonth == 12)
	{
		if (aDate > 0 && aDate <= 31)
		{
			return true;
		}
	}
	else if (aMonth == 4 || aMonth == 6 || aMonth == 9 || aMonth == 11)
	{
		if (aDate > 0 && aDate <= 30)
		{
			return true;
		}
	}
	else if (aMonth == 2)
	{
		if (aYear % 4 == 0)
		{
			if (aDate > 0 && aDate <= 29)
			{
				return true;
			}
		}
		else
		{
			if (aDate > 0 && aDate <= 28)
			{
				return true;
			}
		}
	}
	else
	{
		return false;
	}
	return 0; //to prevent warning message, if properly coded, the control block won't reach this part
}

void Date::printDate()
{
	cout << "month = " << month << " day = " << date << " year = " << year << "\n";
}

Date::~Date()
{
}

