/*
 * Date.cpp
 *
 *  Created on: 17 paü 2017
 *      Author: Mateusz
 */

#include "Date.h"

Date::Date(int inputYear, int inputMonth, int inputDay) :
		day(inputDay), month(inputMonth), year(inputYear)
{
}

Date::Date(const Date &dateFirst)
{
	day = dateFirst.day;
	month = dateFirst.month;
	year = dateFirst.year;
}

int Date::convertToDays(const Date &date)
{
	int toMonth = 0;
	for (int i = 0; i < date.month - 1; i++)
		toMonth += monthDays[i];

	return date.year * 365 + toMonth + date.day;
}

Date Date::convertToDate(const int days)
{
	int leftDays, resultMonth = 0, resultYear = 0;

	resultYear = days / 365;

	leftDays = days - resultYear * 365;

	for (int i = 0; leftDays >= 31; i++)
	{
		leftDays -= monthDays[i];
		resultMonth++;
	}

	Date result(resultYear, resultMonth, leftDays);

	return result;

}

int Date::operator-(const Date &DateSecond)
{
	int n = convertToDays(*this), m = convertToDays(DateSecond);
	return n >= m ? n - m : m - n;
}

Date Date::operator-(int daysMod)
{
	return convertToDate(convertToDays(*this) - daysMod);
}

Date &Date::operator-=(const int daysMod)
{
	return *(this - daysMod);
}

Date Date::operator+(const int daysMod)
{
	return convertToDate(convertToDays(*this) + daysMod);
}

Date &Date::operator+=(const int daysMod)
{
	return *(this + daysMod);
}

bool Date::operator==(const Date &dateSecond) const
{
	return (dateSecond.year != year || dateSecond.month != month
			|| dateSecond.day != day) ? false : true;
}

bool Date::operator!=(const Date &dateSecond) const
{
	return !(*this == dateSecond) ? true : false;
}

std::ostream & operator<<(std::ostream &out, const Date &date)
{
	if (date.year < 1970 || date.month < 1 || date.day < 1)
		out << "Data spoza epoki!" << std::endl;

	else
		out << date.year << "-" << date.month << "-" << date.day << std::endl;

	return out;
}
