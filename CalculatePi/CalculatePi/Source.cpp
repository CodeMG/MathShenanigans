#include <iostream>
long double gregoryLeibnizSeries(int amountOfIterations);
long double nilakanthaSeries(int amountOfIterations);
int main() {
	std::cout << "Start" << std::endl;
	std::cout.precision(17);

	nilakanthaSeries(100000);

	int a;
	std::cin >> a;
}

long double gregoryLeibnizSeries(int amountOfIterations) {
	long double pi = 4.000000000000L;
	bool o = true;
	for (int i = 3; i < amountOfIterations; i++) {
		if (i % 2 == 1) {
			if (o) {
				pi -= (4.0L / i);
				o = false;
			}
			else {
				pi += (4.0L / i);
				o = true;
			}
			std::cout << "I: "<< i << " Pi: "<<std::fixed << pi << std::endl;
		}
	}
	return pi;
}

long double nilakanthaSeries(int amountOfIterations) {
	long double pi = 3.000000000000L;
	bool o = false;
	for (int i = 2; i < amountOfIterations; i+=2) {
			if (o) {
				pi -= (4.0L / (i*(i+1)*(i+2)));
				o = false;
			}
			else {
				pi += (4.0L / (i*(i + 1)*(i + 2)));
				o = true;
			}
			std::cout << "I: " << i << " Pi: " << std::fixed << pi << std::endl;
	}
	return pi;

}