#include <bits/stdc++.h>
using namespace std;

#define EMPTY_ID -1

struct ElementType {
    int id;
    string name;
};

struct Queue {
    int capacity;
    int front;
    int rear;
    int count;
    vector<ElementType> q_array;

    bool is_empty() const {
        return count == 0;
    }

    bool is_full() const {
        return count == capacity;
    }

    int increase(int value) const {
        return (value + 1) % capacity;
    }

    void enqueue(const ElementType& e) {
        if (is_full()) {
            cerr << "Queue is full!\n";
            return;
        }
        rear = increase(rear);
        q_array[rear] = e;
        count++;
    }

    ElementType dequeue() {
        if (is_empty()) {
            cerr << "Queue is empty!\n";
            return {EMPTY_ID, ""};
        }
        ElementType e = q_array[front];
        front = increase(front);
        count--;
        return e;
    }

    void show_queue() const {
        int cnt = count;
        int f = front;
        while (cnt > 0) {
            cout << q_array[f].id << " ";
            f = increase(f);
            cnt--;
        }
        cout << "\n";
    }
};

Queue create_queue(int capacity) {
    Queue Q;
    Q.capacity = capacity;
    Q.front = 0;
    Q.rear = capacity - 1;
    Q.count = 0;
    Q.q_array.resize(capacity);
    return Q;
}

int main() {
    Queue Q = create_queue(10);
    ElementType e1{2, "Element 1"};
    ElementType e2{4, "Element 2"};
    ElementType e3{1, "Element 3"};
    ElementType e4{3, "Element 4"};

    Q.enqueue(e1);
    Q.enqueue(e2);
    Q.enqueue(e3);
    Q.enqueue(e4);

    ElementType e0 = Q.dequeue();
    Q.show_queue();

    e0 = Q.dequeue();
    Q.show_queue();

    return 0;
}
