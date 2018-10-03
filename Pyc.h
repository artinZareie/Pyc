#pragma once
#include <iostream>
#include <string>

using namespace std;

inline void print(string experession) {
	cout << experession;
}

inline void print(char experession) {
	cout << experession;
}

inline void print(int experession) {
	cout << experession;
}

inline void print(float experession) {
	cout << experession;
}

inline void print(double experession) {
	cout << experession;
}

inline void print(long experession) {
	cout << experession;
}


inline void print(unsigned int experession) {
	cout << experession;
}

inline void print(unsigned long experession) {
	cout << experession;
}



inline void print_line(string experession) {
	cout << '\n' << experession << '\n';
}

inline void print_line(char experession) {
	cout << '\n' << experession << '\n';
}

inline void print_line(int experession) {
	cout << '\n' << experession << '\n';
}

inline void print_line(float experession) {
	cout << '\n' << experession << '\n';
}

inline void print_line(double experession) {
	cout << '\n' << experession << '\n';
}

inline void print_line(long experession) {
	cout << '\n' << experession << '\n';
}


inline void print_line(unsigned int experession) {
	cout << '\n' << experession << '\n';
}

inline void print_line(unsigned long experession) {
	cout << '\n' << experession << '\n';
}


inline auto input(string prompt = "") {
	auto data = false;
	cout << prompt;
	cin >> data;
	cout << endl;
	return data;
}
