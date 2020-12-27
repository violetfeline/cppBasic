#include <iostream>
#include <string>

class Person {
public:
	std::string first;
	std::string last;
	int year;
	Person() {
		std::cin >> first >> last >> year;
	}
};

class Employee : public Person {
public:
	double salary;
	Employee() {
		std::cin >> salary;
	}
};

int main() {
	int N;
	std::cin >> N;
	Employee* emps = new Employee[N];
	double max_salary = 0;
	int max_year = 0;
	for(int i = 0; i < N; i++) {
		if(emps[i].salary > max_salary)
			max_salary = emps[i].salary;
		if(emps[i].year > max_year)
			max_year = emps[i].year;
	}
	bool not_found = true;
	for(int i = 0; i < N; i++) {
		if(emps[i].salary == max_salary && emps[i].year == max_year) {
			std::cout << emps[i].last << std::endl;
			not_found = false;
		}
	}
	if(not_found)
		std::cout << "Not found!";
	return 0;
}
