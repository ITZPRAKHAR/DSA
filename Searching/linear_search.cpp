#include <iostream>
using namespace std;

int linearsearch(int arr[], int size, int key)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << "The element is present at " << i + 1 << " position" << endl;
            break;
        }
    }
    if (i == size)
    {
        cout << "Key is not present";
    }
}

int main()
{
    int key;
    cin >> key;
    int a[5] = {1, 2, 3, 4, 5};
    linearsearch(a, 5, key);
    return 0;
}