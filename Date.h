/*
 * Date.h
 *
 *  Created on: 10 paü 2017
 *      Author: makwasny
 */

#ifndef DATE_H_
#define DATE_H_

#include<iostream>
#include <array>

class Date
{
private:
	int day;
	int month;
	int year;
	std::array<int,12> monthDays = {{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

	int convertToDays(const Date &date);
	Date convertToDate(const int days);

public:
	Date(int inputYear=1970, int inputMonth=1, int inputDay=1);
	Date(const Date &dateFirst);

	int operator-(const Date &dateSecond);

	Date operator-(const int daysMod);
	Date &operator-=(const int daysMod);

	Date operator+(const int daysMod);
	Date &operator+=(const int daysMod);

	bool operator==(const Date &dateSecond) const;
	bool operator!=(const Date &dateSecond) const;

	friend std::ostream & operator<<(std::ostream &out, const Date &date);
	Date addToDays(const Date &dateSecond);

	inline int getYear() const {return year;};
	inline int getMonth() const {return month;};
	inline int getDay() const {return day;};
};

#endif /* DATE_H_ */
