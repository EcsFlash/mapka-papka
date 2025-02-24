#include <iostream>
#include "../DataTypes/MapLinear.h"
#include <string>
#include "StudentMark.h"
#include <fstream>
#include <vector>
using namespace std;

namespace std {
	template<> struct hash<MapLinear<string, StudentMarks>> {
		size_t operator()(MapLinear<string, StudentMarks>& s) const noexcept {
			return hash<string>()(s.get_hash());
		}
	};
}

int main() {
	//
	MapLinear<string, StudentMarks> map;
	
	ifstream in("./mapka-papka.txt");
	string tempName, tempSubj;
	char tempM;

	if (in.is_open()) {
		while (in >> tempSubj >> tempName >> tempM)
		{
			//cout << tempSubj << tempName << tempM;
			map[tempName].addMark(tempSubj, tempM);
		}
	}
	MapLinear<StudentMarks, vector<string>> map2;

	in.close();
	for (auto i = map.begin(); i != map.end(); ++i) {
		//if (i) {
		//	//cout << i->key;
		//	//map2[]
		//}
		//
		cout << "gg" << endl;
		//cout << i << endl;
	}
	//
	//
	////
	
	cout << map;

}