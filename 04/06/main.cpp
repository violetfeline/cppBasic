#include <iostream>
#include <cmath>

class Time {
public:
	int hours = 0;
	int minutes = 0;
	int time() {
		return hours * 100 + minutes;
	}
	int delta() {
		return abs(1200 - time());
	}
	void print() {
		std::cout << hours << ' ' << minutes << std::endl;
	}
};

int main() {
	int N;
	std::cin >> N;
	Time* time_table = new Time[N];
	Time min1, min2;
	for(int i = 0; i < N; i++) {
		std::cin >> time_table[i].hours >> time_table[i].minutes;
		if(time_table[i].delta() < min1.delta())
			min1 = time_table[i];
	}
	for(int i = 0; i < N; i++) {
		if(time_table[i].delta() < min2.delta() && time_table[i].delta() > min1.delta())
			min2 = time_table[i];
	}
	if(min1.time() < min2.time()){
		min1.print();
		min2.print();
	} else {
		min2.print();
		min1.print();
	}
	return 0;
}