/*
 * ignore_example.cpp
 *
 *  Created on: Nov 29, 2017
 *      Author: baekhg
 */

#include <iostream>

int main()
{
    char first, last;

    std::cout << "Please, enter your first name followed by your surname: ";

    first = std::cin.get();
    std::cin.ignore(256, ' ');

    last = std::cin.get();

    std::cout << "Your initials are " << first << last << '\n';

    return 0;
}


