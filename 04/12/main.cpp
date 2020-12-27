#include <iostream>
#include <string>

class Worker {
public:
	std::string first;
	std::string last;
	unsigned year;
	Worker() {
		std::cin >> first
				 >> last
				 >> year;
	}
};

class Group {
public:
	std::string name;
	unsigned worker_count;
	Worker* workers;
	Group() {
		std::cin >> name >> worker_count;
		workers = new Worker[worker_count];
	}
	bool is_valid() {
		for(int i = 0; i < worker_count; i++) {
			if(workers[i].year <= 1974) return false;
		}
		return true;
	}
};

int main() {
	unsigned N;
	std::cin >> N;
	Group* grp = new Group[N];
	bool not_found = true;
	for(int i = 0; i < N; i++) {
		if(grp[i].is_valid()) {
			std::cout << grp[i].name << std::endl;
			not_found = false;
		}
	}
	if(not_found)
		std::cout << "Not found!";

	return 0;
}
