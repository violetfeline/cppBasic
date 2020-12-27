#include <iostream>
#include <string>

class Student {
public:
	const unsigned grade_qty = 5;
	std::string first;
	std::string last;
	unsigned grades[5];
	Student() {
		std::cin >> first >> last;
		for(unsigned i = 0; i < grade_qty; i++) {
			std::cin >> grades[i];
		}
	}
};

class Class {
public:
	std::string name;
	unsigned student_count;
	Student* students;
	Class() {
		std::cin >> name >> student_count;
		students = new Student[student_count];
	}
	double average() {
		double sum = 0;
		for(int i = 0; i < student_count; i++)
			for(int j = 0; j < students[i].grade_qty; j++)
				sum += students[i].grades[j];
		return sum / student_count;
	}
};

int main() {
	unsigned N;
	std::cin >> N;
	Class* cls = new Class[N];
	std::string best_name = "";
	double best_average = 0;
	for(int i = 0; i < N; i++) {
		double average = cls[i].average();
		if(average > best_average) {
			best_name = cls[i].name;
			best_average = average;
		}
	}
	std::cout << best_name;

	return 0;
}
