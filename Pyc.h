#pragma once
#include <iostream>
#include <string>

using namespace std;

template < class T > inline void print(T experession) {
	cout << experession;
}


template < class T >inline void print_line(T experession) {
	cout << '\n' << experession << '\n';
}


template < class T > inline T input(string prompt = "") {
	auto data = false;
	cout << prompt;
	cin >> data;
	cout << endl;
	return data;
}

template < class T > inline void input(T &refrence, string prompt = "") {
	cout << prompt;
	cin >> refrence;
	cout << endl;
}
