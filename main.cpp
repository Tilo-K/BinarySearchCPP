#include <iostream>
using namespace std;

#include "binarySearch.cpp"

int main()
{
    int testArray[] = {1,3,4,5,6,9,10,50,90,102}; // has to be sorted
    int pos = binarySearch(4, testArray ,0 , sizeof(testArray)-1);

    cout << "Found at " << pos << endl; // Prints out "Found at 2" if every worked correctly !

    return 0;
}