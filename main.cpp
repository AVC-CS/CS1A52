#include <iostream>

int main()
{

	// take 10 user inputs on 10 lines then find largest
	int largest = 0;
	int input = 0;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Enter a number: ";
		std::cin >> input;
		if (input > largest)
		{
			largest = input;
		}
	}
	std::cout << "The largest number is: " << largest << std::endl;
	

}
