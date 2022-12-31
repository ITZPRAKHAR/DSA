#include <iostream>
using namespace std;
int main()
{
    int a = 40;
    int *p = &a;
    cout << "the value at p is " << *p << endl;

    // new operator
    int *n = new int(56);
    cout << "the value at a is " << *n << endl;

    int *arr = new int[3];
    arr[0] = 4;
    arr[1] = 45;
    arr[2] = 65;

    delete[] arr;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;

    return 0;
}