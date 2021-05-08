#include <iostream>
#include <cmath>
int main() {
	int presition;
	std::cout << "Select the number of times\n" << "you want this test to run\n";
	std::cin >> presition;
	for ( int a = 0; a < 4; a++) {
		int number;
		int total = 0;

		for (int i = 0; i < presition; i++) {

			number = rand() % 100;

			total = number + total;

		}
		double average;
	
	    average = (total / presition);
		if (average != 0) {
			average++;
		}

		

			
		std::cout << average << "\n";
}



}
  
