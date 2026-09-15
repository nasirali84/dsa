#include <iostream>
using namespace std;

class Node{
    int data;
    Node* next;

public:
    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
    Node* head;
    Node* tail;

    public:
    List(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        Node newNode(val); 
        if(head == NULL){
            head = tail = newNode;
            return;
        }
    }
};

int main(){

}