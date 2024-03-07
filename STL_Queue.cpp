#include<iostream>
#include<queue>
using namespace std;
int main(){

         // creating a queue

         queue<int>q;

         q.push(11);

         q.push(15);

         q.push(13);

         cout<<"Size of Queue is: "<<q.size()<<endl;

         q.pop();

         cout<<"Size of Queue is: "<<q.size()<<endl;

         cout<<"Front element of Queue is :"<<q.front()<<endl;

         q.push(20);

         q.push(22);

         q.push(25);

         q.push(29);

         cout<<"Size of Queue is: "<<q.size()<<endl;

         if(q.empty()){
                  cout<<"Queue is Empty.."<<endl;
         }else{
                  cout<<"Queue is not empty.."<<endl;
         }

         return 0;
}