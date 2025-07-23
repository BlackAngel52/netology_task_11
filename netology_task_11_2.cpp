#include <iostream>

int main() {

	std::string correctWord{ "Exile" };
	std::string inputWord{};

	while (inputWord != correctWord) {
		std::cout << "Try to guess the word~!" << std::endl;
		std::cin >> inputWord;
	}
	std::cout << "Correct! The right word was: " << correctWord;
	


	return 0;
}
