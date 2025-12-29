#include <iostream>

// Write a function called doubleNumber() that takes one integer parameter. 
// The function should return double the value of the parameter.

int doubleNumber(int num)
{
	return num * 2;
}





// Write a program that asks the user to enter a number, and then enter a second number. 
// The program should tell the user what the result of adding and subtracting 
// the two numbers is.

void addAndSubtract()
{
	std::cout << "Enter an integer: ";

	int firstUserInput{};
	std::cin >> firstUserInput;

	std::cout << "Enter another integer: ";

	int secondUserInput{};
	std::cin >> secondUserInput;

	std::cout << firstUserInput << " + " << secondUserInput << " is " << firstUserInput + secondUserInput << ".\n";
	std::cout << firstUserInput << " - " << secondUserInput << " is " << firstUserInput - secondUserInput << ".\n";
}


//
// First, let’s create a program that asks the user to enter an integer, 
// waits for them to input an integer, then tells them what 2 times that number is.
// The program should produce the following output (assume I entered 4 as input):

int main()
{
	//std::cout << "Enter an integer: ";

	//int userInput{};

	//std::cin >> userInput;

	//std::cout << "Double that number is: " << userInput * 2 << '\n';

	//std::cout << "Triple that number is: " << userInput * 3 << '\n';

	//addAndSubtract();

	std::cout << doubleNumber(5);


	return 0;
}