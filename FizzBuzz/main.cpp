#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Fizzbuzz application objective:
// 1. print out 100 numbers
// 2. every number which goes into 3 with a reminder of 0 gets replaced with Fizz
// 3. every number which goes into 5 with a reminder of 0 gets replaced with Buzz
// 4. every number which goes into 15 with a reminder of 0 gets replaced with FizzBuzz
// 


int main()
{

	// Create vector and initialize it to hold 100 int numbers
	vector<int> numbers(100);

	// Fizzbuzz array - will hold strings
	vector<string> fizzbuzz(numbers.size());

	// loop through the numbers vector and store numbers from 1 to 100
	for (int i = 0; i < numbers.size(); i++)
	{
		numbers[i] = i + 1;
	}

	// Push all numbers[] to fizzBuzz[] but first:
	// 1. every number divisible by 3:
	//		a. check if its divisible by 3
	//      b. if it is then convert the int into a string
	//		c. push the coverted string into fizzbuzz vector[] 
	for (int i = 0; i < numbers.size(); i++)
	{
		if (numbers[i] % 15 == 0)
		{
			fizzbuzz[i] = "FizzBuzz";
		}
		else if (numbers[i] % 5 == 0)
		{
			fizzbuzz[i] = "Buzz";
		}
		else if (numbers[i] % 3 == 0)
		{
			fizzbuzz[i] = "Fizz";
		}
		else
		{
			fizzbuzz[i] = to_string(numbers[i]);
		}
	}

	// loop through fizzbuzz to see what we have
	for (string f : fizzbuzz)
	{
		cout << f << endl;
	}

}