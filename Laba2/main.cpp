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
	cout << "������� ����� ��� ������: ";
	cin >> search;
	stringstream ss;	
	int cnt = 0;
