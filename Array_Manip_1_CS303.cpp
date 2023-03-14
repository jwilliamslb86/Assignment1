

#include "Array_Manip_1_Head.h"
#include <iostream>
#include <array>
#include <istream>
#include <ostream>
#include <string>
#include <fstream>

using namespace std;


int main()
{
    /*Open input file and read in values as integers to an array using ArrayManip class*/
    fstream inFile;
    ArrayManip userArray;
    int Array[100];
    inFile.open("Array.txt");
    int i = 0;
    while (inFile >> Array[i])
    {
		i++;
	}
    inFile.close();


    /*Search for a number in the array*/
    int num = 0;
    cout << "Enter a number to search for: ";
    cin >> num;
    int index = userArray.search(Array, 100, num);
    cout << "The index of the number is: " << index << endl;
    /*Modify a value in the array*/
    int index2 = 0;
    int newValue = 0;
    cout << "Enter the index of the value you want to modify: ";
    cin >> index2;
    cout << "Enter the new value: ";
    cin >> newValue;
    userArray.modify(Array, 100, index2, newValue);
    /*Add a value to the array*/
    int newValue2 = 0;
    cout << "Enter the value you want to add to the array: ";
    cin >> newValue2;
    userArray.add(Array, 100, newValue2);
    /*Remove a value from the array*/
    int index3 = 0;
    cout << "Enter the index of the value you want to remove: ";
    cin >> index3;
    userArray.remove(Array, 100, index3);
    

    
    
    
}




