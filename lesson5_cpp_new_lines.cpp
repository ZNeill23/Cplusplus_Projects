// Lesson 5: C++ New Lines - Created using W3Schools concepts

#include <iostream> // Allows us to use cout for output

int main() {
    // Using std::endl for new lines
    std::cout << "Hello, Zack!" << std::endl;
    std::cout << "Welcome to C++ programming!" << std::endl;

    // Using \n for new lines
    std::cout << "This is a new line using \\n.\n";
    std::cout << "Another line follows.\n";

    // Mixing std::endl and \n
    std::cout << "Using both methods:" << std::endl << "This is a new line.\n";

    // Adding multiple new lines for formatting
    std::cout << "\n\nEnd of lesson demonstration.\n";

    // Prevent console from closing immediately
    std::cout << "Press Enter to exit...";
    std::cin.get();

    return 0; // Indicates successful program execution
}
