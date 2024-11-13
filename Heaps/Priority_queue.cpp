#include <iostream>
#include<queue>
using namespace std;


int main(){

    // priority_queue<int>pq;
  
  //To implement the Priority queue for MIN_HEAP we use the below syntax while declaring the prioruty queue ----- 
   //     |
    // priority_queue<int , vector<int> , greater<int>>pq;


    // pq.push(45);
    // pq.push(55);
    // pq.push(65);
    //Pushinng whole array in a priority queue to make its heap --->

    int arr[10] = {1 , 9 , 10};

    priority_queue<int , vector<int> , greater<int>>pq(arr , arr+3); 

    while(pq.empty() == false){
      cout<<pq.top()<<" ";
      pq.pop();
    }

return 0;
}