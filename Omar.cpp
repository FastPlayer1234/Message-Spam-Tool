#include <thread>
#include <chrono>
#include <iostream>

int main()
{
	int repeatCount;
	std::string message;
	std::string intergerInput;  // Variable to hold user input for integer before we sanitize it


	std::cout << "Hello CMake." << std::endl;
	std::cout << "What message would you like to be repeated? ";
	std::getline(std::cin, message);


	std::cout << "How manty times would you like it repeated? ";
	// Get user input for integer as a string

	while (true) {
		std::cout << "Enter an integer: ";
		std::getline(std::cin, intergerInput);

		try {
			repeatCount = std::stoi(intergerInput); // Convert string to integer
			break; // Exit loop if conversion is successful
		}
		catch (...) {
			std::cout << "Invalid input. Please enter a valid integer." << std::endl;
		}
	}
	if (repeatCount <= 1) {
		std::cout << "I'm sorry, using this tool for this is useless" << std::endl;
		return 1; // Exit the program with an error code
	}

	std::cout << "okay ;)" << std::endl;
	std::cout << "loading..." << std::endl;
	std::cout << "This tool was made by Omar Ashraf" << std::endl;
	std::cout << "Converted to C++ by George D." << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));


	for (int i = 0; i < repeatCount; ++i) {
		std::this_thread::sleep_for(std::chrono::milliseconds(10)); // Delay for 10 milliseconds
																	// so we dont crash the terminal
		std::cout << message << std::endl;
	}
	std::cout << "Done! Press Enter to exit..." << std::endl;
	std::cin.get(); // Wait for user input before closing
	//cout << "You entered: " << message << endl;
	return 0;
}
