#include <iostream>

int ClimbingStairs(int numberOfStairs) {

	
	if (numberOfStairs < 3 && numberOfStairs > 0) {
		std::cout << numberOfStairs;
		return numberOfStairs;
	}

	int oneStep = 1;
	int twoStep = 2;
	int result = 0;

	for (int i = 3; i <= numberOfStairs; i++) {

		result = twoStep + oneStep;
		oneStep = twoStep;
		twoStep = result;
	}

	if (numberOfStairs <= 0) {
		std::cout << "Error, input is lower or equal 0";
	}

	if (numberOfStairs >= 3) {
		std::cout << result;
		return result;
	}
	return -1;
}


int main() {

	ClimbingStairs(1);
	

}