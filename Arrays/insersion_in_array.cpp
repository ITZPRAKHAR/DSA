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
    cout << "enter the number you want to insert in the array" << endl;
    cin >> n;
    cout << "enter the position you want to insert in the array" << endl;
    cin >> post;
    if(post<=0 || post> size+1) {
        cout<<"invalid position";
    }
    else {
    for (i = size ; i > post - 1; i--)
    {
        a[i + 1] = a[i];
    }
    a[post - 1] = n;
    size++;
    
    for (i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    }
    return 0;
}