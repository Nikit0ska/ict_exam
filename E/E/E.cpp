#include <iostream>
#include <vector>
#include <sstream>


using namespace std;

int answ(string str) {
	vector<string> elems;


	istringstream ss(str);

	string elem;

	while (getline(ss, elem, ' ')) {
		elems.push_back(elem);
	}

	vector<int> arr;

	for (int i = 0; i < elems.size(); ++i) {

		if (elems[i] == "+") {

			if (arr.size() < 2) {
				cout << "ERROR";
				return -213141;
			}

			int num2 = arr[0];
			int num1 = arr[1];
			int result = num1 + num2;
			arr[0] = result;

			for (int j = 1; j < arr.size() - 1; ++j) {
				arr[j] = arr[j + 1];
			}
			arr.pop_back();
		}
		else if (elems[i] == "-") {
			if (arr.size() < 2) {
				cout << "ERROR";
				return -213141;
			}
			int num2 = arr[0];
			int num1 = arr[1];
			int result = num1 - num2;
			arr[0] = result;

			for (int j = 1; j < arr.size() - 1; ++j) {
				arr[j] = arr[j + 1];
			}
			arr.pop_back();
		}
		else if (elems[i] == "/") {
			if (arr.size() < 2) {
				cout << "ERROR";
				return -213141;
			}
			int num2 = arr[0];
			int num1 = arr[1];
			if (num2 == 0) {
				cout << "ERROR";
				return -213141;
			}
			
			int result = num1 / num2;
			arr[0] = result;
			
			for (int j = 1; j < arr.size() - 1; ++j) {
				arr[j] = arr[j + 1];
			}
			arr.pop_back();
		}

		else if (elems[i] == "*") {
			if (arr.size() < 2) {
				cout << "ERROR";
				return -213141;
			}
			int num2 = arr[0];
			int num1 = arr[1];
			int result = num1 * num2;
			arr[0] = result;

			for (int j = 1; j < arr.size() - 1; ++j) {
				arr[j] = arr[j + 1];
			}
			arr.pop_back();
		}
		
		else {
			arr.insert(arr.begin(), atoi(elems[i].c_str()));
		}

	}
	return arr[0];
}

int main() {
	string zapis;
	getline(cin, zapis);
	int answer = answ(zapis);
	if (answer != -213141)
	{
		cout << answer;
	}
	return 0;
}

