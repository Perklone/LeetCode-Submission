class MyCircularQueue {
public:
    MyCircularQueue(int k) {
        vec.resize(k);
        front = 0;
        back = 0;
        reset = true;
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        vec[back] = value;
        if(front == back && reset) {
            reset = false;
        }
        back++;
        back = back % vec.size();
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        front = (front+1) % vec.size();
        if(front == back && !(reset)) {
            reset = true;
        }
        
        return true;
    }
    
    int Front() {
        if(isEmpty()) return -1;
        return vec[front];
    }
    
    int Rear() {
        if(isEmpty()) return -1;
        return vec[(back + vec.size()-1) % vec.size()];
    }
    
    bool isEmpty() {
        if(front == back && reset) {
            return true;
        }
        else return false;
    }
    
    bool isFull() {
       if(front == back && !reset) {
           return true;
       }
        else {
            return false;
        }
    }
private:
    vector<int>vec;
    int front;
    int back;
    bool reset;
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