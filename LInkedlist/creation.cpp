#include<bits/stdc++.h>
using namespace std;


//defining struct node
struct Node{
    int data;
    Node* next;

};

//defining linked list class
class LinkedList {
public:
    LinkedList() {
        head = NULL;
    }


   void addNode(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
        }
    }



//printing the linked list
void printList(){
    Node* curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;

    }
    cout<<endl;
}
private:
    Node* head;

    };


int main(){
    LinkedList myList;

    //adding values to linked list

    myList.addNode(1);
    myList.addNode(2);
    myList.addNode(3);

    myList.printList();


    return 0;
}