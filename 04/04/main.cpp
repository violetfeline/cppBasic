#include <iostream>
#include <string>

class TV{
	public:
		std::string model = "";
		std::string country = "";
		unsigned diagonal = 0;
};

int main() {
	int n;
	std::cin >> n;
	TV* brave = new TV[n];
	for(int i = 0; i < n; i++) {
		std::cin >> brave[i].model >> brave[i].country >> brave[i].diagonal;
	}
	bool not_found = true;
	std::string M;
	std::cin >> M;
	for(int i = 0; i < n; i++) {
		if(brave[i].model == M) {
			std::cout << brave[i].country
					  << ' '
					  << brave[i].diagonal
					  << std::endl;
			not_found = false;
		}
	}
	if(not_found) std::cout << "Not found!";
	return 0;
}