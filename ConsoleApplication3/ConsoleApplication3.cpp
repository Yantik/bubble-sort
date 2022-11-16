#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	// кол-во элементов
	const int s =10;
	int arr[s];
	cout << "unsorted array" << endl;
	for (int i = 0; i < s; i++) arr[i] = rand() % 1000 + 1;
	for (int i = 0; i < s; i++) cout << arr[i] << "\t";
	for (int i = 0; i < s; i++)
	{
		for (int i = 0; i < (s-1); i++)
		{
			if (arr[i] > arr[i + 1])
			{
				if ((i + 1) != s)
				{
					swap(arr[i], arr[i + 1]);
				}
			}
		}
	}
	cout << "\nsorted array" << endl;
	for (int i = 0; i < s; i++) {cout << arr[i] << "\t";}
}


