#include <iostream>

int main()
{
    std::string name{};
    std::string secondName{};

    std::cout << "Enter your name: " << std::endl;
    std::cin >> name;
    std::cout << "Enter your second name: " << std::endl;
    std::cin >> secondName;

    std::cout << "Hello, " << name << " " << secondName << ".";

    return 0;
}

