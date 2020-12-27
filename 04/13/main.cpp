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
};

int main() {
	unsigned N;
	std::cin >> N;
	Group* grp = new Group[N];
	bool not_found = true;
	for(int i = 0; i < N; i++) {
		if(grp[i].name == "A-15") {
			for(int j = 0; j < grp[i].worker_count; j++)
				std::cout << grp[i].workers[j].first << ' '
						  << grp[i].workers[j].last  << std::endl;
			not_found = false;
		}
	}
	if(not_found)
		std::cout << "Not found!";

	return 0;
}
