#include <iostream>
#include <cmath>

using namespace std;
bool checkSimple(int num)
{
	if (num == 2)  
		return true; 
	
	if (num < 2 or num % 2 == 0) 
		return false;
	
	for (int i = 3; i <= sqrt(num); i += 2){
		if (num % i == 0) 
			return false;
	}
	return true;
}

int main()
{
	int a, b;
	cin >> a >> b;
	int temp;

	bool is_negative;
	bool getNum = false;

	for (int i = a; i <= b; ++i) {
		is_negative = false;
		if (i < 0)
			is_negative = true;
		if (i % 2 ==0)
		{
			if (is_negative)
				temp = sqrt(-i / 2);
			else
				temp = sqrt(i / 2);

			if (!is_negative)
			{
				if (pow(temp, 2) * 2 == i) {
					if (checkSimple(temp))
					{
						cout << i << endl;
						getNum = true;
					}
				}
			}
			else {
				if (pow(temp, 2) * 2 == -i) {
					if (checkSimple(temp))
					{
						cout << i << endl;
						getNum = true;
					}
				}
			}
			
		}
	}
	if (!getNum) {
		cout << 0;
	}
	{

	}
	return 0;
}
