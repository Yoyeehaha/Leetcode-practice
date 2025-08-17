
typedef struct {
    int* queue;
    int rear, front, capacity;
} MyStack;


MyStack* myStackCreate() {
    MyStack* s = calloc(1, sizeof(MyStack));
    s->queue = calloc(100, sizeof(int));
    s->rear = 0;
    s->front = 0;
    s->capacity = 100;

    return s;
}

void myStackPush(MyStack* obj, int x) {
    obj->rear = (obj->rear + 1) % obj->capacity;
    obj->queue[obj->rear] = x;
}

int myStackPop(MyStack* obj) {
    int cnt = obj->rear - obj->front;

    for(int i = 1;i < cnt;i++) {
        obj->front = (obj->front + 1) % obj->capacity;
        int temp = obj->queue[obj->front];
        obj->rear = (obj->rear + 1) % obj->capacity;
        obj->queue[obj->rear] = temp;
    }

    obj->front = (obj->front + 1) % obj->capacity;
    return obj->queue[obj->front];
}

int myStackTop(MyStack* obj) {
    return obj->queue[(obj->rear) % obj->capacity];
}

bool myStackEmpty(MyStack* obj) {
    return (obj->rear == obj->front);
}

void myStackFree(MyStack* obj) {
    free(obj->queue);
}

/**
 * Your MyStack struct will be instantiated and called as such:
 * MyStack* obj = myStackCreate();
 * myStackPush(obj, x);
 
 * int param_2 = myStackPop(obj);
 
 * int param_3 = myStackTop(obj);
 
 * bool param_4 = myStackEmpty(obj);
 
 * myStackFree(obj);
*/