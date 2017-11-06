/*
 * main.cpp
 *
 *  Created on: 17 paü 2017
 *      Author: Mateusz
 */


#include "DateFormatter.h"

int main()
{

	Date d2(1970,2,1), data(1970,2,20);

	DateFormatter f;
	GermanDateFormatter f1;



	std::cout << data << " -- " << d2 << std::endl;

	int x = d2-data;

	std::cout << x << std::endl;

	data+=6;

	std::cout << data << std::endl;

	data-=28;
	std::cout << data << std::endl;


	return 0;

}
