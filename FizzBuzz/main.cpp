#include <iostream>
#include <vector>
using namespace std;



int main()
{
	int numValue = 100;

	// Create an array to hold 100 numbers
	vector <int> numbers(numValue);

	for (int i = 0; i < numValue; i++)
	{

		numbers[i] = i + 1;
	}

	// print array
	for (int num : numbers)
	{
		//cout << num << endl;
	}

	// Reassign value for: divisible by 3 = remainder of 0
	for (int i = 0; i < numValue; i++)
	{
		//cout << numbers[i];
		if (numbers[i] % 3 == 0)
		{
			cout << numbers[i];
		}
	}
}