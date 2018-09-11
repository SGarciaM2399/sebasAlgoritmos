#include<iostream>
#include<string>
#include"Header.h"
using namespace std;
int operando(string str) {
	Stack<char> s;
	for (char c : str) {
		float aux1;
		float aux2;
		switch (c) {
		case '+':
			aux2 =	 s._top();
			s.pop();
			aux1 = s._top();
			s.pop();
			s.push((aux1 + aux2));
			break;
		case'-':	
			aux2 = s._top();
			s.pop();
			aux1 = s._top();
			s.pop();
			s.push((aux1 - aux2));
			break;
		case'*':	
			aux2 = s._top();
			s.pop();
			aux1 = s._top();
			s.pop();
			s.push((aux1 *aux2));
			break;
		case'/':	
			aux2 = s._top();
			s.pop();
			aux1 = s._top();
			s.pop();
			s.push((aux1 / aux2));
			break;
				break;
		default:s.push(c-48); break;
		}
	}
	return s._top();
}
int main() {
	cout << (operando("564*+")) << endl;
	cout << (operando("56+4*")) << endl;
	cout << (operando("25*")) << endl;
	cin.get();
	return 0;
}