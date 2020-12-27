#include <iostream>
#include <string>

class TRAIN {
	public:
		std::string city = "";
		std::string number = "";
		unsigned day = 0;
};

int main() {
	int n;
	std::cin >> n;
	TRAIN* trains = new TRAIN[n];
	for(int i = 0; i < n; i++) {
		std::cin >> trains[i].city >> trains[i].number >> trains[i].day;
	}
	std::string dest;
	unsigned day;
	std::cin >> dest >> day;
	bool unreachable = true;
	for(int i = 0; i < n; i++) {
		if(trains[i].day == day && trains[i].city == dest) {
			std::cout << trains[i].number << std::endl;
			unreachable = false;
		}
	}
	if(unreachable) {
		std::cout << "Unreachable city!";
	}
	return 0;
}