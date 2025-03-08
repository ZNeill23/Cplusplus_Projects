// Lesson 2: C++ Statements - Created using W3Schools concepts

#include <iostream> // Allows us to use cout for output

int main() {
    // Output multiple statements
    std::cout << "Hello, my name is Zack!" << std::endl;
    std::cout << "I'm learning C++ and practicing statements." << std::endl;

    // A blank line for better readability
    std::cout << std::endl;

    std::cout << "Each statement in C++ must end with a semicolon." << std::endl;
    std::cout << "Whitespace doesn't affect execution but helps with readability." << std::endl;

    // Prevent console from closing immediately
    std::cout << "Press Enter to exit...";
    std::cin.get(); // Waits for user input

    return 0; // Indicates successful program execution
}
