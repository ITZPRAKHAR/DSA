#include <iostream>
using namespace std;
void insertion(int arr[], int size)
{
    int i, j, temp;
    for (i = 1; i < size; i++)
    {
        temp = arr[i];
        j=i-1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }

    for (i = 0; i < size; i++)
    { 
        cout << arr[i] << " ";
    }
}
int main()
{

    int a[5] = {1, 6, 4, 3, 7};
    insertion(a, 5);
    return 0;
}