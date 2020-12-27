#include <iostream>

class Time {
public:
	int hours = 0;
	int minutes = 0;
	int seconds = 0;
	int time() {
		return hours * 10000 + minutes * 100 + seconds;
	}
	void print() {
		std::cout << hours   << ' '
				  << minutes << ' '
				  << seconds << std::endl;
	}
};

int main() {
	int N;
	std::cin >> N;
	Time max;
	for(int i = 0; i < N; i++) {
		Time tmp;
		std::cin >> tmp.hours >> tmp.minutes >> tmp.seconds;
		if(tmp.time() > max.time())
			max = tmp;
	}
	max.print();
	return 0;
}