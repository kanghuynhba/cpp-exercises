#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
Node *getNode(int x) {
    //Cap phat vung nho tren heap
    Node *p=new Node; 
    if(p==NULL) {
        cout << "Loi khong du bo nho!";
    }
    //Gan gia tri cho truong thong tin
    p->data=x;
    p->next=NULL;
    return p;
}
void addFirst(Node *&head, Node *&tail, int x) {
    Node *p=getNode(x);
    //Dung neu la phan tu dau tien cua x
    if(head==NULL) {
        head=tail=p;
    } else {
        //Cho phep gan Node dau tien vao list
        p->next=head;
        //Cap nhat gia tri cua head bang p
        head=p;
    }
}
void addLast(Node *&head, Node *&tail, int x) {
    Node *p=getNode(x);
    if(head==NULL) {
        head=tail=p;
    } else {
        //Cho phep gan Node cuoi cung vao tail
        tail->next=p;
        //Cap nhat gia tri cua tail la p
        tail=p;
    }
}
void insertAfter(Node *q, int x) {
    Node *p=getNode(x);
    p->next=q->next;
    q->next=p;
}
void insertBefore(Node *head, Node *q, int x) {
    Node *p=getNode(x);
    for(Node *r=head; r->next!=q; r=r->next) {
        p->next=q;
        r->next=p;
    }
}
//Ham nay tuong duong ham tren voi chi phi thap hon
void insBefore(Node *q, int x) {
    Node *p=new Node;
    if(p==NULL) {
        cout << "Loi khong du bo nho";
    }
    *p=*q;
    q->data=x;
    q->next=p;
}
void printList(Node *&head) {
    if(head==NULL) {
        cout << "Danh sach rong";
    } else {
        for(Node *r=head; r->next!=NULL; r=r->next) {
            cout << r->data << " ";
        }
    }
}
void destroyList(Node *&head) {
    Node *p;
    while(head!=NULL) {
        p=head;
        head=head->next;
        delete p;
    }
}
int main() {
    Node *head=NULL, *tail=NULL;
    while(true) {
        int x;
        cin >> x;
        if(x==0) {
            break;
        }
        addFirst(head, tail, x);
    }
    int k;
    cin >> k;
    Node *q=head->next;
    insBefore(q, k);
    printList(head);
    destroyList(head);
    return 0;
}
