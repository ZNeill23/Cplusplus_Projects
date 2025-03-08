// Lesson 4: C++ Outputting Numbers - Created using W3Schools concepts

#include <iostream> // Allows us to use cout for output

int main() {
    // Declare and initialize two numbers
    int num1 = 10;
    int num2 = 5;

    // Output numbers directly
    std::cout << "First Number: " << num1 << std::endl;
    std::cout << "Second Number: " << num2 << std::endl;

    // Perform arithmetic operations and display results
    std::cout << "Sum: " << num1 + num2 << std::endl;
    std::cout << "Difference: " << num1 - num2 << std::endl;
    std::cout << "Product: " << num1 * num2 << std::endl;
    std::cout << "Quotient: " << num1 / num2 << std::endl;

    // Prevent console from closing immediately
    std::cout << "\nPress Enter to exit...";
    std::cin.get();

    return 0; // Indicates successful program execution
}
