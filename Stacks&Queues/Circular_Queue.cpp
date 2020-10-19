class MyCircularQueue {
private :
    int *data;
    int size,count,head,tail;
public:
    /** Initialize your data structure here. Set the size of the queue to be k. */
    MyCircularQueue(int k) {
        size=k;
        data=new int[k];
        head=size-1;
        tail=0;
        count=0;
    }
    
    /** Insert an element into the circular queue. Return true if the operation is successful. */
    bool enQueue(int value) {
        if(isFull())
            return false;
        data[tail]=value;
        tail=(tail+1)%size;
        ++count;
        return true;
    }
    
    /** Delete an element from the circular queue. Return true if the operation is successful. */
    bool deQueue() {
        if(isEmpty())
            return false;
        head=(head+1)%size;
        count--;
        return true;
    }
        
    /** Get the front item from the queue. */
    int Front() {
        return isEmpty()? -1:data[(head+1)%size];  
    }
    
    /** Get the last item from the queue. */
    int Rear() {
        return isEmpty() ?-1:data[(tail-1+size)%size];
    }
    
    /** Checks whether the circular queue is empty or not. */
    bool isEmpty() {
        return count==0;
    }
    
    /** Checks whether the circular queue is full or not. */
    bool isFull() {
        return count==size;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
