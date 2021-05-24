#include <fstream>
#include <iostream>
using namespace std;

int main() {
	ifstream fin("input.txt");
	string str;
	fin >> str;
	char symb_max = ' ';
	int len_max = 0;
	int fmax = 1;
	for (int i = 0; i < str.size() - 1; ++i) {
		if (str[i] == str[i + 1]) {
			fmax++;
			if (len_max < fmax) {
				symb_max = str[i];
				len_max = fmax;
			}
		}
		else {
			fmax = 1;
		}
	}
	if (symb_max != ' ')
	{
		cout << symb_max << " " << len_max << endl;

	}
	else
	{
		cout << str[0] << " " << 1 << endl;
	}
	
}
