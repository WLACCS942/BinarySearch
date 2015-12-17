/* Nick Champagne
 * CS942 - Fall 2015
 * Algorithms - Binary Search
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int binarySearch(int array[], int first, int last, int value)
{
	int index;
	int mid = 0;
 
	if (first > last) {
		index = -1;
	} else {
		mid = (first + last)/2;
	}

	if (value == array[mid]) {
		index = mid;
	} else if (value < array[mid]) {
		index = binarySearch(array, first, mid-1, value);
	} else {
		index = binarySearch(array, mid+1, last, value);
	}

	return index;
}
 
int main() {

	int list[11];

	for (int k=0; k<11; k++) {
		list[k]=2*k+1;
	}
 
	cout << "binary search results: " << binarySearch(list,1,21,13) << endl;
 
	return 0;
}