// BinarySearch Algorithm


#include <iostream>
#include <stdio.h> 
#include <string>
using namespace std;

// A recursive binary search function. It returns location of the search key in given array is present, 
// otherwise -1 
int binarySearch(int numArray[], int numSize, int searchKey)
{
	int mid = 0;
	int low = 0;
	int high = numSize - 1;	//arrays start at 0

	while (low <= high) {
		mid = (low + high) / 2;

		// If the element is present at the middle itself 
		if (numArray[mid] < searchKey) {
			low = mid + 1;
		}
		// If element is smaller than mid, then 
		// it can only be present in left subarray 
		else if (numArray[mid] > searchKey) {
			high = mid - 1;
		}
		else {
			return mid;
		}

	}

	// We reach here when element is not 
	// present in array 
	return -1;		// not found
}

void main(string args[])
{
	int numArray[] = { 2, 5 ,11, 17, 19, 21, 26 ,33 ,39, 43, 51, 65, 79, 88, 99 };
	int const numSize = sizeof(numArray) / sizeof(numArray[0]);
	int searchKey;


	//added this code for user input for keys 2 , 43, and 40 respectively
	cout << "what is your search key? \n";
	cin >> searchKey;

	cout << "List of numbers to search through: \n";
	for (int i = 0; i < numSize; i++) {
		cout << "\t" << numArray[i];
	}

	int searchIndex = binarySearch(numArray, numSize, searchKey);
	if (searchIndex == -1) {
		cout << "\nThe Search Key " << searchKey << " is not present in array.";
	}
	else {
		cout << "\nThe Search Key " << searchKey << " is present at index " << searchIndex;
	}
}

/*
the outputs for the search keys of 2, 43 and 70:

" the search key 2 is present at the index 0"
" the search key 43 is present at index 9"
" the search key 70 is not present in array"

*/