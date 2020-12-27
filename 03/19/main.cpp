#include <iostream>
int add(int &A, int &B) {
	return A + B;
}
int sub(int &A, int &B) {
	return A - B;
}
int mul(int &A, int &B) {
	return A * B;
}
int divide(int &A, int &B) {
	return A / B;
}
int mod(int &A, int &B) {
	return A % B;
}


int main() {
	int A, B;
	char O;
	std::cin >> A >> B;
	std::cin >> O;
	switch (O) {
	case '+':
		std::cout << add(A, B);
		break;
	case '-':
		std::cout << sub(A, B);
		break;
	case '*':
		std::cout << mul(A, B);
		break;
	case '/':
		std::cout << divide(A, B);
		break;
	case '%':
		std::cout << mod(A,B);
		break;
	}

	return 0;
}