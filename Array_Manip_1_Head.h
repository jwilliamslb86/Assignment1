#pragma once
#ifndef ARRAY_MANIP_1_HEAD_
#define ARRAY_MANIP_1_HEAD_
#include "Array_Manip_1_Def.cpp"



class ArrayManip
{
public:
/*Check if a certain integer exists in the array if the number is present return the index where the number is present.*/
int search(int myArray[], int size, int num);

/* A function that can modify the value of an integer when called with the index of the integer in the array and return the new value and old value back to the user. */
void modify(int myArray[], int size, int index, int newValue);

/*A function that adds a new integer to the end of the array */
void  add(int myArray[], int size, int newValue);

/*A function which intakes an index of an array and replaces the value with either 0 or removes the integer altogether.*/
void remove(int myArray[], int size, int index);


};
#endif 
