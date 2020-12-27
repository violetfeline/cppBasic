#include <iostream>
#include <string>

class Book {
public:
	std::string first;
	std::string last;
	Book() {
		std::cin >> first >> last;
	}
};

class FictionBook : public Book {
public:
	std::string genre; //  novel story poem
	FictionBook() {
		std::cin >> genre;
	}
};

class ScientificBook : public Book {
public:
	std::string field; //  informatics physics mathematics chemistry
	ScientificBook() {
		std::cin >> field;
	}
};

int main() {
	int N, M;
	std::cin >> N;
	FictionBook* fic = new FictionBook[N];
	std::cin >> M;
	ScientificBook* sci = new ScientificBook[M];

	bool not_found = true;
	for(int i = 0; i < N; i++)
		if(fic[i].genre == "poem")
			for(int j = 0; j < M; j++)
				if(fic[i].first == sci[j].first && fic[i].last == sci[j].last) {
					std::cout << sci[j].first << ' ' << sci[j].last << std::endl;
					not_found = false;
				}
	if(not_found)
		std::cout << "Not found!";
	return 0;
}
