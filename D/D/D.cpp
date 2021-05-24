#include<stdio.h>
#include <vector>
#include <iostream>


using namespace std;


int arr[1000];
void terms(int num, int cur_pos, int lim)
{
	
	if (num <= 0)
	{
		for (int i = 0; i < cur_pos; i++)
			cout << arr[i] << " ";
		cout << endl;
	}
	else 
	{
		for (int i = 1; i <= lim; i++)
		{
			arr[cur_pos] = i;
			if (i < num - i)
			{
				terms(num - i, cur_pos + 1, i);
			}
			else {
				terms(num - i, cur_pos + 1, num - i);
			}
			
		}
	}
}

int main()
{
	int num;
	cin >> num;
	terms(num, 0, num - 1);
	cout << num << endl;
	return 0;
}
