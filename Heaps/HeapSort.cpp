#include <iostream>
using namespace std;

class heap
{

public:
    int arr[100];
    int size = 0;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
            }
            else
            {
                return;
            }
        }
    }

    void printHeap()
    {

        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
    }

    // function to delte the root node

    void deleteRoot()
    {
        arr[1] = arr[size];
        size = size - 1;
        int index = 1;

        while (index < size)
        {
            int left = arr[2 * index];
            int right = arr[2 * index + 1];

            int larger = left > right ? 2 * index : 2 + index + 1;

            if (arr[index] < arr[larger])
            {
                swap(arr[index], arr[larger]);
                index = larger;
            }
            else
            {
                return;
            }
        }
    }
};

void heapify(int arr[], int i, int n)
{
    // n = size
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right <= n && arr[right] > arr[largest])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

//Heap Sort
void HeapSort(int arr[] , int n){
   int size = n;
   while(size >1){
   swap(arr[size] , arr[1]);
   size--;

   heapify(arr , 1 , size);
   }
}
int main()
{
    // we are creating max heap

    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    h.printHeap();

    // deleting the root node

    h.deleteRoot();

    cout << endl;
    h.printHeap();
    cout << endl;

    // implementing heapify function

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, i, n);
    }

    cout << "printing array" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;

    //implementing  Heap Sort
 

   cout << "printing Sorted array" << endl;
    HeapSort(arr , n);
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }


    return 0;
}