#include<iostream>
#include<stack>
using namespace std;

class Stack
{
public:
         // Properties:

         int top;
         int *arr;
         int size;

         // Creating constructor:

         Stack(int size){
                  this->size=size;
                  arr= new int[size];
                  top=-1;
         }

         // Push operation:

         void push(int element){
                  if(size - top > 1){
                           top++;
                           arr[top]=element;
                  }
                  else{
                           cout<<"Stack is Overflow.."<<endl;
                  }
         }

         // Pop Operation:

         void pop(){
                  if(top>=0){
                           top--;
                  }
                  else{
                           cout<<"Stack is Underflow.."<<endl;
                  }
         }

         // Top Operation:

         int peak(){
                  if(top>=0){
                           return arr[top];
                  }else{
                           cout<<"Stack is Empty.."<<endl;
                           return -1;
                  }
         }

         // Empty Operation:

         bool isEmpty(){
                  if(top==-1){
                           return true;
                  }
                  else{
                           return false;
                  }
         }

         void printStack(){
                  for(int i=0;i<=top;i++){
                           cout<<arr[i]<<" ";
                  }
         }
        
};

int main(){

         Stack st(5);

         st.push(22);
         st.push(43);
         st.push(44);
         st.push(21);
         st.push(25);
         st.push(26);

         // OR
         
         /*
         for(int i=0;i<=5;i++){
                  int n;
                  cout<<"Enter the value to push: ";
                  cin>>n;
                  st.push(n);
         }
         */
         

         cout<<st.peak()<<endl;

         st.pop();

         cout<<st.peak()<<endl;

         st.pop();

         cout<<st.peak()<<endl;

         st.pop();

         cout<<st.peak()<<endl;

         if(st.isEmpty()) {
                   cout << "Stack is Empty... " << endl;
         }
         else{
                  cout << "Stack is not Empty... " << endl;
         }

         cout<<"printing Remaning element present in stack:"<<endl;
         st.printStack();
         return 0;
}
