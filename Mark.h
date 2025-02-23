#pragma once


class Mark {
	char m;
public:
	Mark() {
		m = 0;
	}
	Mark(char _m) {
		m = _m;
	}
	char getMark() {
		return m;
	}
	friend ostream& operator<<(ostream& os, Mark& m) {
		return os << m.m;
	}
};