#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	ifstream in("input.txt");
	string line; //слово
	string search; //слово для поиска
	cout << "Введите слово для поиска: ";
	cin >> search;
	stringstream ss; //строковый поток
	int cnt = 0; //счётчик 1 так как одно слово всегда есть
	while (in >> line) { //считываем по предложению
		ss << line << ' ';
		string temp = line;
		temp[temp.size() - 1] = 0; //в буфере убираем последнйи символ, так как может быть запятая или точка или ещё что
		if (line == search || temp == search) {
			++cnt;
		}
		if (line[line.size() - 1] == '.') { //если конец предложения
			ss << " count = " << cnt << '\n';
			cnt = 0;
		}
	}
	cout << ss.str(); // выводим предложения
	in.close(); // закрываем файл
	system("pause>>void");
}