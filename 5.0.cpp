#include <iostream>
#include <time.h>

int main() {

	srand(time(NULL));
	int choice = 0;
	bool isRunning = true;

	while (isRunning) {

		int compChoice = rand() % 3 + 1;
		std::cout << "1 = Rock\n";
		std::cout << "2 = Paper\n";
		std::cout << "3 = Scissors\n";
		std::cout << "Enter your choice : \n";
		std::cin >> choice;

		if (choice == 1 || choice == 2 || choice == 3) {
			if (choice == 1 && compChoice == 1 || choice == 2 && compChoice == 2 || choice == 3 && compChoice == 3) {
				std::cout << "Computer : " << compChoice << "\n";
				std::cout << "Tie ! \n";
			}
			if (choice == 1 && compChoice == 2 || choice == 2 && compChoice == 3 || choice == 3 && compChoice == 1) {
				std::cout << "Computer : " << compChoice << "\n";
				std::cout << "You loose ! \n";
			}
			if (choice == 1 && compChoice == 3 || choice == 2 && compChoice == 1 || choice == 3 && compChoice == 2) {
				std::cout << "Computer : " << compChoice << "\n";
				std::cout << "You win ! \n";
			}
		}
		else {
			std::cout << "Choice invalid !\n";
		}
	}

	system("pause");
	return EXIT_SUCCESS;
}
