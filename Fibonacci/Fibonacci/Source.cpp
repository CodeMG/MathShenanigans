#include <iostream>

//Calculating Fibonacci with a loop and with recursion
void printFibonacciIterativ(int until);

__int64 fibonacciRecursive(int i);

int main() {

	std::cout << fibonacciRecursive(41) << std::endl;

	int a;
	std::cin >> a;

	return 1;
}

//until says how long the loop should go
//I am using __int64 so that one can see the larger numbers
void printFibonacciIterativ(int until) {
	unsigned __int64 a = 1;
	unsigned __int64 b = 0L;
	for (int i = 0; i < until;i++) {
		unsigned __int64 c = a + b;
		a = b;
		b = c;
		std::cout << "I: " << i << " C: " << c << std::endl;
	}
}

//i says where in the fibonacci sequence the number we want can be found.
//again using __int64 so that one can see the number
//starts to take a while at around 40
__int64 fibonacciRecursive(int i) {
	if (i <= 0) {
		return 1;
	}
	else if (i == 1) {
		return 0;
	}
	else {
		return fibonacciRecursive(i-1) + fibonacciRecursive(i-2);
	}
}