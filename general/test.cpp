#include <bits/stdc++.h>
using namespace std;

struct Item{
    int key, temp;
};

struct Node{
    Node *left;
    Node *right;
    Item item;
    int max_date, min_date;
};  

void dfs(Node* AVL, int& date1, int& date2, Node* &max_temp) {
    if(AVL==NULL) {
        return;
    }
    if(AVL->max_date<date1 or date2<AVL->min_date) {
        return;
    }
    if(date1<=AVL->item.key and AVL->item.key<=date2) {
        if(max_temp==NULL || max_temp->item.temp<AVL->item.temp) {
            max_temp=AVL;
        }
    }
    date1=max(date1, AVL->min_date);
    date2=min(date2, AVL->max_date);
    dfs(AVL->left, date1, date2, max_temp);
    dfs(AVL->right, date1, date2, max_temp);
}

int main() {

    return 0;
}