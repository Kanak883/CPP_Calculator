#include <iostream>
#define print(x) std::cout << x << std::endl;

int main() {
	int number1;
	int number2;
	int chosen_one;
	int result;

	while (true) {
		print("Enter First number: ");
		std::cin >> number1;
		print("Enter second number: ");
		std::cin >> number2;

		print("Choose a operator from following: \n1. Add \n2. Subtract \n3. Multiply \n4. Divide \n5. Exit");
		std::cin >> chosen_one;
		if (chosen_one == 1) {
			result = number1 + number2;
			print(result);
		}
		else if (chosen_one == 2) {
			result = number1 - number2;
			print(result);
		}
		else if (chosen_one == 3) {
			result = number1 * number2;
			print(result);
		}
		else if (chosen_one == 4) {
			result = number1 / number2;
			print(result);
		}
		else if (chosen_one == 5) {
			print("Exiting the program!");
			break;
		}
		else
			print("Invalid option!");
		continue;
	}
	return 0;
}