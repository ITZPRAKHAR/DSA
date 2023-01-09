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

    void deleteRoot(){
        arr[1] = arr[size];
        size = size-1;
        int index = 1;

        while(index<size){
            int left = arr[2*index];
            int right = arr[2*index + 1];

            int larger = left > right ? 2*index : 2+index+1;

            if(arr[index] < arr[larger]){
                swap(arr[index] , arr[larger]);
                index = larger;
            }
            else{
                return;
            }
        }
    }
};
int main()
{  
    //we are creating max heap

    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    h.printHeap();
    h.deleteRoot();
    cout<<endl;
    h.printHeap();

    return 0;
}