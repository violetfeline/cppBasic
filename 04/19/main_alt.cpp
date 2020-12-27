#include <iostream>
#include <string>

class Book {
public:
	std::string title;
	Book(std::string t) : title(t) {}
};

class FictionBook : public Book {
public:
	int printed;
	double sold;
	FictionBook(std::string t, int p, double s) : Book(t), printed(p), sold(s) {}
	double popularity() {
		return (sold / printed) * (sold / 1000);
	}
};

class ScientificBook : public Book {
public:
	double price;
	int pages;
	int libs;
	ScientificBook(std::string t, double pr, int pa, int l) : Book(t), price(pr), pages(pa), libs(l) {
		std::cin >> price >> pages >> libs;
	}
	double expensive() {
		return price / pages;
	}
};

int main() {
	int N, M;
	std::cin >> N;
	FictionBook** fic = new FictionBook*[N];
	for(int i = 0; i < N; i++) {
		std::string title;
		int printed;
		double sold;
		std::getline(std::cin.ignore(), title);
		std::cin >> printed >> sold;
		fic[i] = new FictionBook(title, printed, sold);
	}
	std::cin >> M;
	ScientificBook** sci = new ScientificBook*[M];
	for(int i = 0; i < M; i++) {
		std::string title;
		double price;
		int pages;
		int libs;
		std::getline(std::cin.ignore(), title);
		std::cin >> price >> pages >> libs;
		sci[i] = new ScientificBook(title, price, pages, libs);
	}

	double max_pop = 0;
	for(int i = 0; i < N; i++) {
		double pop = fic[i]->popularity();
		if(pop > max_pop)
			max_pop = pop;
	}
	for(int i = 0; i < N; i++)
		if(fic[i]->popularity() == max_pop)
			std::cout << fic[i]->title << std::endl;

	double avg_val = 0;
	int max_libs = 0;
	for(int i = 0; i < M; i++) {
		avg_val += sci[i]->expensive();
		if(sci[i]->libs > max_libs)
			max_libs = sci[i]->libs;
	}
	avg_val /= M;
	bool not_found = true;
	for(int i = 0; i < M; i++) {
		double val = sci[i]->expensive();
		if(val < avg_val && sci[i]->libs == max_libs) {
			std::cout << sci[i]->title;
			not_found = false;
		}
	}
	if(not_found)
		std::cout << "Not found!";
	return 0;
}
