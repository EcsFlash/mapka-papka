#pragma once
#include "Mark.h"
#include <string>
#include "C:\Users\Alekc\source\repos\strdan\DataTypes\MapLinear.h"

using namespace std;


class StudentMarks {
	MapLinear<string, Mark> marks;
public:
	StudentMarks() {
		cout << "creating dict" << endl;
	}
	void addMark(string subj, char m) {
		marks[subj] = Mark(m);
		//marks.insert(subj, Mark(m));
	}
	friend ostream& operator<<(ostream& os, StudentMarks& st) {
		return os << st.marks << endl;
	}
	bool operator==(StudentMarks & other) {
		return marks == other.marks;
	}
};