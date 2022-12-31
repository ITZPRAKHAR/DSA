#include <iostream>
using namespace std;

void selection(int arr[], int size)
{
    int i, j;
    int temp;

    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int a[5] = {0,2,1,2,0};
    selection(a, 5);

    return 0;
}