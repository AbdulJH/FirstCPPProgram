// FirstC++Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// First, let’s create a program that asks the user to enter an integer, 
// waits for them to input an integer, then tells them what 2 times that number is.
// The program should produce the following output (assume I entered 4 as input):

#include <iostream>

int main()
{
	std::cout << "Enter an integer: ";

	int userInput{};

	std::cin >> userInput;

	std::cout << "Double that number is: " << userInput * 2;
	


	return 0;
}

