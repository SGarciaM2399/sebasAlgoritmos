#ifndef __HEADER_H__

#define __HEADER_H__
template<typename T>
class Stack
{


	struct Node
	{
		T elem;
		Node* next;
		Node(T e, Node* next) {
			elem = e;
			this->next = next;
		}
	};

	Node* top;
	int n;
public:
	Stack() :n(0), top(nullptr) {}
	~Stack() {
		Node* aux;
		while (top != nullptr) {
			aux = top;
			top = top->next;
			delete aux;
		}
	}
	void push(T e) {
		top = new Node(e, top);
		n++;
	}
	void pop() {
		if (n > 0) {
			Node* aux = top;
			top = top->next;
			delete aux;
			n--;
		}
	}

	T _top() {
		return(n > 0) ? top->elem : 0;
	}
	bool empty() {
		return n == 0;
	}

};

#endif // !__HEADER_H__
