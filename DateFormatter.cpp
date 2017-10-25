/*
 * DateFormatter.cpp
 *
 *  Created on: 24 paü 2017
 *      Author: Mateusz
 */

#include "DateFormatter.h"


std::string ComputerDateFormatter::format(const Date& dateToShow) const
{
	return std::to_string( dateToShow.getYear() ) + "-" + std::to_string( dateToShow.getMonth() ) + "-" + std::to_string( dateToShow.getDay() );
}

std::string GermanDateFormatter::format(const Date& dateToShow) const
{
	return std::to_string( dateToShow.getDay() )+ "." + std::to_string( dateToShow.getMonth() ) + "." + std::to_string( dateToShow.getYear() );
}

