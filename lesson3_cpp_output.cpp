// Lesson 3: C++ Output - Created using W3Schools concepts

#include <iostream> // Allows us to use cout for output
#include <string>   // Allows us to use string variables

int main() {
    // Define user profile details
    std::string name = "Zack Neill";
    int age = 25;
    std::string hobby = "playing World of Warcraft";

    // Display user profile information using cout
    std::cout << "User Profile\n";
    std::cout << "-----------------\n";
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Hobby: " << hobby << std::endl;

    // Demonstrating multiple outputs in one statement
    std::cout << "\nSummary: " << name << " is " << age << " years old and enjoys " << hobby << "." << std::endl;

    // Prevent console from closing immediately
    std::cout << "\nPress Enter to exit...";
    std::cin.get();

    return 0; // Indicates successful program execution
}
