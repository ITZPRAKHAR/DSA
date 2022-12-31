#include <iostream>
#include <queue>
using namespace std;

int main()
{

    queue<int> q;

    q.push(30);
    q.push(20);
    cout << q.front() << endl;
    cout << q.size() << endl;
    cout << q.empty() << endl;
    q.pop();
    cout << q.size() << endl;
    cout << q.front() << endl;
    return 0;
}