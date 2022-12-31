 #include <iostream>
 using namespace std;
 class stack{
    public:
        int size;
        int top;
        int *arr;

        stack(int size){
         this ->size = size;
         arr = new int[size];
         top = -1;
        }
         void push(int element){
            if(size != top+1){
               top++;
               arr[top] = element;
            }
            else{
               cout<<"Stack Overflow"<<endl;
            }
         }

         void pop(){
            if(top ==-1){
               cout<<"Cannot pop , stack is empty"<<endl;
            }

            else{
               top--;
            }
         }

         int peek(){
            if(top != -1){
            return arr[top];
         }
         else{
            cout<<"stack is empty"<<endl;
            return -1;
         }
         }

         bool isEmpty(){
            if(top == -1){
               return true;
            }
            else{
               return false;
            }
         }

 };


 int main(){
    stack st(5);
    st.push(56);
    st.push(59);
    st.push(58);
    st.push(232);
    st.push(45);
    st.push(98);

   // st.pop();

    cout<<st.peek()<<endl;

    cout<<st.isEmpty();

     
 
 return 0;
 }