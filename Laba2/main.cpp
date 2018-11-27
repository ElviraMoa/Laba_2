#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	ifstream in("input.txt");
	string line;
	string search;
	cout << "¬ведите слово дл€ поиска: ";
	cin >> search;
	stringstream ss;
	int cnt = 0;
	while (in >> line) {
		ss << line << ' ';
		string temp = line;
		temp[temp.size() - 1] = 0;
		if (line == search || temp == search) {
			++cnt;
		}
		if (line[line.size() - 1] == '.') {
			ss << " count = " << cnt << '\n';
			cnt = 0;
		}

	}
}
