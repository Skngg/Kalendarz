/*
 * DateFormatter.h
 *
 *  Created on: 24 paü 2017
 *      Author: Mateusz
 */

#ifndef DATEFORMATTER_H_
#define DATEFORMATTER_H_

#include"Date.h"
#include<string>
#include <iomanip>

class DateFormatter
{
public:
	virtual void format(const Date& dateToShow) const;

};

class ComputerDateFormatter : public DateFormatter
{
public:
	void format(const Date& dateToShow) const;
};



class GermanDateFormatter : public DateFormatter
{
public:
	void format(const Date& dateToShow) const;
};

#endif /* DATEFORMATTER_H_ */
