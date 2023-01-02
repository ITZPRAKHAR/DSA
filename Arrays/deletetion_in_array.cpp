#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "enter the size of the array you want to create " << endl;
    cin >> size;
    int i, post, n;
    int a[size];
    cout << "enter the values of your array " << endl;
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    
    cout << "enter the position whose data you want to delete from the array" << endl;
    cin >> post;
    if (post <= 0 || post > size)
    {
        cout << "invalid position";
        }
    else
    {
        for (i = post - 1; i < size - 1; i++)
        {
            a[i] = a[i + 1];
        }
        size--;
        for (i = 0; i < size; i++)
        {
            cout << a[i] << " ";
        }
    }
    return 0;
}
