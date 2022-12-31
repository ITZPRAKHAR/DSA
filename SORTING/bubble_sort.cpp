#include <iostream>
using namespace std;

void bubble(int arr[], int size)
{
    int i, j, temp;
    int flag =0;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag =1;
            }
        }
        if(flag==0){
            break;
        }
    }
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int a[5] = {1, 6, 4, 3, 7};
    bubble(a, 5);
    return 0;
}