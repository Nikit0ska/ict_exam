

#include <iostream>
using namespace std;




int getBinSum(int n) {
	int sum = 0;
	while (n > 0)
	{
		int temp = n % 2;
		n /= 2;
		if (temp)
			sum++;
	}
	return sum;
}

int main()
{
 int a, b;
	int max = -999999999;
	int count = 0;
	cin >> a >> b;
	for ( int i = a; i <= b; i++)
	{
		int curBinSum = getBinSum(abs(i));
		if (i % 2 == 0 and i % 10 != 0 and curBinSum == 5)
		{
			count++;
			if (i > max)
				max = i;
		}
	}
	if (count) {
		cout << count << " " << max << endl;
		return 0;
	}

	cout << 0 << " " << 0;
}