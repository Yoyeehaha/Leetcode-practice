
typedef struct {
    int* stack1;
    int* stack2;
    int top1;
    int top2;
} MyQueue;


MyQueue* myQueueCreate() {
    MyQueue* q = calloc(1, sizeof(MyQueue));
    q->stack1 = calloc(100, sizeof(int));
    q->stack2 = calloc(100, sizeof(int));
    q->top1 = -1;
    q->top2 = -1;

    return q;
}

void myQueuePush(MyQueue* obj, int x) {
    obj->stack1[++(obj->top1)] = x;
}

int myQueuePop(MyQueue* obj) {
    if((obj->top2) < 0) {

        while((obj->top1) >= 0) {
            obj->stack2[++(obj->top2)] = obj->stack1[(obj->top1)--];
        } 

    }
    return obj->stack2[(obj->top2)--];
    
}

int myQueuePeek(MyQueue* obj) {
    if((obj->top2) < 0) {

        while((obj->top1) >= 0) {
            obj->stack2[++(obj->top2)] = obj->stack1[(obj->top1)--];
        } 

    }
    return obj->stack2[(obj->top2)];
}

bool myQueueEmpty(MyQueue* obj) {
    return ((obj->top1) < 0 && (obj->top2) < 0);
}

void myQueueFree(MyQueue* obj) {
    free(obj->stack1);
    free(obj->stack2);
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);
 
 * int param_2 = myQueuePop(obj);
 
 * int param_3 = myQueuePeek(obj);
 
 * bool param_4 = myQueueEmpty(obj);
 
 * myQueueFree(obj);
*/