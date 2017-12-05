/*
 * unget_example.cpp
 *
 *  Created on: Dec 1, 2017
 *      Author: baekhg
 */


#include <iostream>
#include <string>

int main()
{
    std::cout << "Please, enter a number or a word: ";
    char c = std::cin.get();

    if((c >= '0') && (c <='9'))
    {
        int n;
        std::cin.unget();
        std::cin >> n;
        std::cout << "You entered a number: " << n << '\n';
    }
    else
    {
        std::string str;
        std::cin.unget();
        getline(std::cin, str);
        std::cout << "You entered a word: " << str << '\n';
    }
    return 0;
}

