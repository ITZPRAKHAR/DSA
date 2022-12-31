
#include <iostream>
using namespace std;
int binarysearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        // go to right wala part
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        { // key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{
    int a[5] = {2, 3, 4, 5, 6};
    int b[6] = {1, 2, 3, 4, 5, 6};
    int index = binarysearch(a, 5, 9);
    cout << "Index xof the key is " << index;
}