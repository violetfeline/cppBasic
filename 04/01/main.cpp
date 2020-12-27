#include <iostream>
#include <string>

class TRAIN {
	public:
		std::string city = "";
		std::string number = "";
};

int main() {
	int n;
	std::cin >> n;
	TRAIN* trains = new TRAIN[n];
	for(int i = 0; i < n; i++) {
		std::cin >> trains[i].city >> trains[i].number;
	}
	std::string dest;
	std::cin >> dest;
	bool unreachable = true;
	for(int i = 0; i < n; i++) {
		if(trains[i].city == dest) {
			std::cout << trains[i].number << std::endl;
			unreachable = false;
		}
	}
	if(unreachable) {
		std::cout << "Unreachable city!";
	}
	return 0;
}