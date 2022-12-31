#include <iostream>
using namespace std;

//factorial function

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}


//2's power function
int power(int n)
{
    if (n == 0)
        return 1;
    else
        return 2 * power(n - 1);
}

//fibonacci series function
int fibo(int n)
{

    if (n == 0)
        return 0;

    if (n == 1)
        return 1;
    else
        return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int i;
    cin >> i;
    cout<<endl;
    cout << fact(i) << endl;
    cout << power(i) << endl;
    cout<<fibo(i)<<endl;
    return 0;
}