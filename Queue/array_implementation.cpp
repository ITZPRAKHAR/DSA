#include <iostream>
using namespace std;

class queue{
    public:
    int size;
    int *arr;
    int rear , front;

    queue(int size){
        this->size = size;
        int rear = -1;
        int front = -1;
        arr = new int[size];
    }
        void enqueue(int data){
            if(rear == size -1){
                cout<<"fULL"<<endl;
                // return;
            }

            rear ++;
            arr[rear] = data;
        }

        int dequque(){
            if(rear ==-1){
                cout<<"empty"<<endl;
                // return;
            }
            int res = arr[0];

            for(int i =0 ; i<size ; i++){
                arr[i] = arr[i+1];
            }
            rear --;
            return res;
        }

        int getfront(){
            if(rear == -1){
                cout<<"empty"<<endl;
                // return;


            }

            return arr[0];
        }
    };


int main(){

queue q(4);

q.enqueue(20);
q.enqueue(50);

cout<<q.dequque();


return 0;
}