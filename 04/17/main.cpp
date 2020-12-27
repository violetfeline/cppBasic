#include <iostream>
#include <string>

class Person {
public:
	std::string first;
	std::string last;
	Person() {
		std::cin >> first >> last;
	}
};

class Employee : public Person {
public:
	std::string position;
	double salary;
	Employee() {
		std::cin >> position >> salary;
	}
};

int main() {
	unsigned N;
	std::cin >> N;
	Employee* emps = new Employee[N];
	double sum = 0;
	for(unsigned i = 0; i < N; i++)
		sum += emps[i].salary;
	double avg = sum / N;
	for(unsigned i = 0; i < N; i++)
		if(emps[i].salary >= avg)
			std::cout << emps[i].last << ' ' << emps[i].position << std::endl;
	return 0;
}