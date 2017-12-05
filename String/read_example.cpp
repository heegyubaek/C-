/*
 * read_example.cpp
 *
 *  Created on: Nov 30, 2017
 *      Author: baekhg
 */


#include <iostream>
#include <fstream>

int main()
{
    std::ifstream is ("test.txt", std::ifstream::binary);

    if(is)
    {
        is.seekg(0, is.end);
        int length = is.tellg();
        is.seekg(0, is.beg);

        char *buffer = new char[length];

        std::cout << "Reading " << length << " characters...";

        is.read (buffer, length);

        if(is)
            std::cout << "all characters read successfully.";
        else
            std::cout << "error: only " << is.gcount() << " could be read";
        is.close();

        delete[] buffer;
    }
    else
    {
        std::cout << "Failed open file!";
    }

    return 0;
}

