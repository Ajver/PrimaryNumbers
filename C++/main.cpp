#include <iostream>
#include <time.h>

// 400, 039, 777
int last_prim = 3;

int main() {
	if (last_prim < 3) {
		last_prim = 3;
	}
	else if (last_prim % 2 == 0) {
		last_prim++;	
	}

	int num = last_prim;

	int timer = clock();

	bool isRunning = true;
	
	while (isRunning) {
		num += 2;
		bool is_prim = true;
		for (int idx = 3; idx <= sqrt(num); idx++) {
			if (num % idx == 0) {
				is_prim = false;
				break;
			}
		}

		if (is_prim) {
			last_prim = num;
		}

		if (clock() - timer >= 30000) {
			std::cout << last_prim << std::endl;
			isRunning = false;
		}

		/*
		if (clock() - timer >= 5000) {
			timer += 5000;
			std::cout << "Last primary number: " << last_prim << std::endl;
		}
		*/
	}

	system("pause");

	return 0;
}