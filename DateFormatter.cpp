/*
 * DateFormatter.cpp
 *
 *  Created on: 24 paü 2017
 *      Author: Mateusz
 */

#include "DateFormatter.h"

void ComputerDateFormatter::format(const Date& dateToShow) const
{
	std::cout << std::to_string(dateToShow.getYear()) + "-";

	std::cout << std::setfill('0') << std::setw(2)
			<< std::to_string(dateToShow.getMonth()) << "-";

	std::cout << std::setfill('0') << std::setw(2)
			<< std::to_string(dateToShow.getDay());

}

void GermanDateFormatter::format(const Date& dateToShow) const
{
	std::cout << std::setfill('0') << std::setw(2)
				<< std::to_string(dateToShow.getDay());

	std::cout <<  "." << std::setfill('0') << std::setw(2)
			<< std::to_string(dateToShow.getMonth());

	std::cout << "." + std::to_string(dateToShow.getYear());

}

