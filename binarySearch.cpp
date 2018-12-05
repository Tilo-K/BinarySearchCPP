/*
*   The main file which contains the algortihm itself.
*/
int binarySearch(int find, int* array, int min, int max)
{
    int mid = (max-min)/2; // The center of the indexies min & max
    if(min == max)
    {
        if(find == array[min])
        {
            return mid; // Element found and index returned.
        }
        else
        {
            return -1;
        }
    }
    else if(find < array[mid])
    {
        binarySearch(find, array, min, mid-1);
    }
    else
    {
        binarySearch(find, array, mid+1, max);
    }
}