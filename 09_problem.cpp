//making a queue

#include <iostream>
using namespace std;

const int SIZE = 5;
class queue{
private:
   
    int items[SIZE];
    int head;
    int tail;
public:
    queue()
    {
        head = -1;
        tail = -1;
     }
    // condition for full queue
     bool isFull() {
        return(head == 0 && tail ==SIZE - 1) || (tail ==(head -1) % (SIZE -1));     
     }

     bool isEmpty(){
        return head == -1;
     }
     // function to add an element to the queue
    void put(int var){
        if (isFull())
        {
            cout<<"Queue is full"<<endl;
        }
        else        // if queue is empty, initialize head to 0
        {
           if(head == -1) head =0;
           tail = (tail +1)% SIZE;      // circular increment
           items[tail] = var;
        }
        
        
    }
    int get(){
        if (isEmpty())
        {
           cout<<"Queue is empty";
           return -1;
        }
        int element = items[head];
        if (head == tail)       // queue has only one element, so we reset the queue after removing it
        {
            head = -1;
            tail = -1;
        }
        else        //circular increment of head
        {
            head = (head +1) % SIZE;
        }
       return element; 
    }
};

int main(){
    queue q1;
    q1.put(52);
    q1.put(41);
    cout<<"1. "<<q1.get()<<endl;
    cout<<"2. "<<q1.get()<<endl;
    return 0;
}