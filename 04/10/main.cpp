#include <iostream>

class Node {
public:
	int x, y, d;
	Node() {}
	Node(int x, int y, int d) : x(x), y(y), d(d) {}
};

main () {
	const int n = 10;
	int tmp;
	Node** nodes = new Node* [n];
	for(int i = 0; i < n; i++){
		nodes[i] = new Node[n];
		for(int j = 0; j < n; j++) {
			std::cin >> tmp;
			nodes[i][j].d = -tmp;
		}
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++)
			std::cout << nodes[i][j].d << "\t";
		std::cout << std::endl << std::endl;
	}
}
