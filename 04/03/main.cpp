#include <iostream>
#include <string>

class TRAIN {
	public:
		std::string city_from = "";
		std::string city_to = "";
		std::string number = "";
};

int main() {
	int n;
	std::cin >> n;
	TRAIN* trains = new TRAIN[n];
	for(int i = 0; i < n; i++) {
		std::cin >> trains[i].city_from >> trains[i].city_to >> trains[i].number;
	}
	std::string A, B, C;
	std::cin >> A >> B >> C;
	bool unreachable = true;
	for(int i = 0; i < n; i++) {
		if(trains[i].city_from == A && trains[i].city_to == B) {
			for(int j = 0; j < n; j++) {
				if(trains[j].city_from == B && trains[j].city_to == C) {
					std::cout << trains[i].number << std::endl
							  << trains[j].number << std::endl;
					unreachable = false;
				}
			}
		}
	}
	if(unreachable) {
		std::cout << "Unreachable city!";
	}
	return 0;
}
