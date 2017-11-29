/*
 * peek_example.cpp
 *
 *  Created on: Nov 29, 2017
 *      Author: baekhg
 */


#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::cout << "Please, enter a number or a word: ";
    std::cout.flush();

    std::cin >> std::ws;
    int c = std::cin.peek();

    if(c == EOF) return 1;
    if(std::isdigit(c))
    {
        int n;
        std::cin >> n;
        std::cout << "You entered the number: " << n << '\n';
    }
    else
    {
        std::string str;
        std::cin >> str;
        std::cout << "You entered the word: " << str << '\n';
    }

    return 0;
}


