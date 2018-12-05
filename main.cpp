#include <iostream>
#include "binarySearch.cpp"

using namespace std;

int main(int argn, char** argv)
{
    int testArray[] = {1,3,4,5,6,9,10,50,90,102}; // has to be sorted
    int pos = binarySearch(90, testArray ,0 , len(testArray));

    cout << "Found at " << pos << endl;

    return 0;
}