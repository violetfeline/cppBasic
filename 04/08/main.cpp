#include <iostream>
#include <string>

class Student {
public:
	std::string first = "";
	std::string last = "";
	int grades[5] = {0};
	int grade_sum() {
		return grades[0] + grades[1] + grades[2] + grades[3] + grades[4];
	}
};

int main() {
	int N;
	std::cin >> N;
	Student* students = new Student[N];
	for(int i = 0; i < N; i++) {
		std::cin >> students[i].first >> students[i].last;
		for(int j = 0; j < 5; j++)
			std::cin >> students[i].grades[j]; 
	}
	Student absolute;
	for(int i = 0; i < N; i++)
		if(students[i].grade_sum() > absolute.grade_sum())
			absolute = students[i];
	std::cout << absolute.first << ' ' << absolute.last;
	return 0;
}
