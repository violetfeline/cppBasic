#include <iostream>
#include <cassert>
#include <string>

class Stack {
public:
  Stack(int c);
  Stack(const Stack& st);
  ~Stack();
  bool empty();
  char top();
  void push(int obj);
  void pop();
private:
  int size;
  int capacity;
  char* arr;
};

//  should be greater than 0
Stack::Stack(int c) :
	size(0),
	capacity(c),
	arr(new char[capacity]) {}

// copy constructor
Stack::Stack(const Stack& st) :
  size(st.size),
  capacity(st.capacity),
  arr(new char[capacity]) {
  for (int i = 0; i < size; i++) {
    arr[i] = st.arr[i];
  }
}

Stack::~Stack() {
  delete[] arr;
}

bool Stack::empty() {
  return size == 0;
}

char Stack::top() {
  assert (!empty());
  return arr[size - 1];
}

void Stack::push(int obj) {
  if (size == capacity ) {
    return;
  }
  arr[size] = obj;
  ++size;
}

void Stack::pop() {
  if (empty()) {
    return;
  }
  --size;
}

bool matches(char open, char close) {
	std::string opens = "([{";
	std::string closes = ")]}";
	bool result = opens.find(open) == closes.find(close);
	return result;
}

int main() {
	std::string pars;
	std::cin >> pars;
	Stack s(pars.length());
	bool balanced = true;
	for(int i = 0; i < pars.length() && balanced; i++) {
		char symbol = pars[i];
		if(symbol == '(' || symbol == '[' || symbol == '{') {
			s.push(symbol);
		} else {
			if(s.empty()) {
				balanced = false;
			} else {
				char top = s.top();
				if(!matches(top, symbol))
					balanced = false;
				s.pop();
			}
		}
	}
	if(balanced && s.empty())
		std::cout << "YES";
	else
		std::cout << "NO";
	return 0;
}
