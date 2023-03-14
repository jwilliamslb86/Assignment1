#include "Array_Manip_1_Head.h"
#include <iostream>
#include <array>
#include <istream>
#include <ostream>
#include <string>
#include <fstream>

using namespace std;


class ArrayManip
{
public:


	/*Check if a certain integer exists in the array if the number is present return the index where the number is present.*/
	int search(int myArray[], int size, int num)
	{
		for (int i = 0; i < size; i++)
		{
			if (myArray[i] == num)
			{
				return i;
			}
		}
		cout << "The number is not present in the array" << endl;
		return -1;
	}

	/* A function that can modify the value of an integer when called with the index of the integer in the array and return the new value and old value back to the user. */
	void modify(int myArray[], int size, int index, int newValue)
	{
		try {


			int oldValue = myArray[index];
			myArray[index] = newValue;
			cout << "The old value is: " << oldValue << endl;
			cout << "The new value is: " << newValue << endl;
		}
		catch (exception& e) {
			cout << "The index is out of bounds" << endl;

		}

	}
	/*A function that adds a new integer to the end of the array */
	void add(int myArray[], int size, int newValue)
	{
	
		myArray[size] = newValue;

	}

	/*A function which intakes an index of an array and replaces the value with either 0 or removes the integer altogether.*/
	void remove(int myArray[], int size, int index)
	{
		myArray[index] = 0;
	}

	


};

