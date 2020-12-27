#include <iostream>
#include <string>

class TV{
	public:
		std::string model = "";
		std::string prod_country = "";
		std::string sell_country = "";
};

int main() {
	int n;
	std::cin >> n;
	TV* brave = new TV[n];
	for(int i = 0; i < n; i++) {
		std::cin >> brave[i].model >> brave[i].prod_country >> brave[i].sell_country;
	}
	bool not_found = true;
	std::string A, B;
	std::cin >> A >> B;
	for(int i = 0; i < n; i++) {
		if(brave[i].prod_country == A && brave[i].sell_country == B) {
			std::cout << brave[i].model << std::endl;
			not_found = false;
		}
	}
	if(not_found) std::cout << "Not found!";
	return 0;
}