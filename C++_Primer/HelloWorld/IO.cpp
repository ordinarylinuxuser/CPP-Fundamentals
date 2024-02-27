/**
 * @file IO.cpp
 * @author Ordinary Linux User
 * @brief Shows how to read and write to input and output buffer.
 * @version 0.1
 * @date 2024-02-27
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>

int main()
{
    // Print to output Stream
    std::cout << "Enter two numbers:"
              << std::endl;
    // initialize variables
    int v1, v2 = 0;

    // read from input stream
    std::cin >> v1 >> v2;

    // print the sum to output stream
    std::cout << "The sum of "
              << v1 << " and "
              << v2 << " is "
              << v1 + v2
              << std::endl;

    return 0;
}