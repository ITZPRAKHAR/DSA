#include <iostream>
#include<stack>
using namespace std;

int main(){
  stack<int>s;
  s.push(34);
  s.push(9);

  s.pop(); //it will pop the top most element of the stack , so here 9 will be poped out;

  cout<< "Print the top elemnt of the stack "<<s.top()<<endl;

  cout <<"is the stack empty "<< s.empty()<<endl;

  cout<<"the size of the stack is "<<s.size()<<endl; //give the number of elemnts present in the stack ;

return 0;
}