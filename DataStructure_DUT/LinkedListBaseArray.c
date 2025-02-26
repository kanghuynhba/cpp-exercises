#include <iostream>

struct ElementType{
    int id;
    char* name;
};

struct ListInfo{
    struct ElementType *theArray; //malloc(capacity*sizeof(struct ElementType))
    int capacity; //=MAX_SIZE
    int count; //=0
};

typedef struct ListInfo *List;
typedef int Position;

List createList(int capacity) {
    List L=malloc(sizeof(struct ListInfo));
    if(L==NULL) {
        printf("NOT ENOUGH MEMORY!\n");
        return L;
    } 

    L->theArray=malloc(capacity*sizeof(struct ElementType));
    L->capacity=capacity;
    L->count=0;
    
    return L;
}

void listInsert(List L,struct ElementType e, Position p) {
    if(p>=L->count || p<0 || L->count==L->capacity) {
        printf("LIST IS FULL OR POSITION IS WRONG!\n");
        return;
    }
    int current=L->count;
    while(current!=p) {
        L->theArray[current]=L->theArray[current-1];
        current--;
    }
    L->theArray[current]=e;
    L->count++;
}

void listDelete(List L, Position p) {
    if(p>=L->count || p<0) {
        printf("LIST IS EMPTY OR POSITION IS WRONG!\n");
        return;
    }
    int current=p;
    while(current!=L->count-1) {
        L->theArray[current]=L->theArray[current+1];
        current++;
    }
    L->count--;
}

void listDisplay(List L) {
    int i;
    for(i=0; i<L->count; i++) {
        printf("%d  id: %d      name: %s\n", i+1, L->theArray[i].id, L->theArray[i].name);
    }
}

int main() {
    List L=createList(10);
    ElementType e1, e2, e3, e4;
    e1.id=100; e1.name="Nguyen Van A";
    e2.id=101; e2.name="Nguyen Van B";
    e3.id=102; e3.name="Nguyen Van C";
    e4.id=103; e4.name="Nguyen Van D";

    listInsert(L, e1, 0);
    listInsert(L, e2, 1);
    listInsert(L, e3, 2);
    listInsert(L, e4, 3);

    listDisplay(L);

    return 0;
}
