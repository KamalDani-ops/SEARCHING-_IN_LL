// write a program to perform UPDATION at linked list.
#include<iostream>
using namespace std;

// creating the Node structure.
struct Node{
    int data;
    Node*next;

};

int main(){

    // creating nodes.

    Node*head = new Node();
    Node*second = new Node();
    Node*third = new Node();
    Node*fourth = new Node();
    Node*fifth = new Node();

    // Assigning values to the nodes and connecting them.

    head->data = 10;
    head->next  = second ; 

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = fifth;

    fifth->data = 50;
    fifth->next = NULL;

    // UPDATING.

    Node*temp = head;

    int key;
    cout << "enter a key : ";
    cin >> key;

    int new_value ;
    cout << "enter the new value :";
    cin >> new_value;


    bool found = false;

    while(temp != NULL ){
        if(temp->data == key){
            found = true;
            temp->data = new_value ; 

            break ;
        }
        temp = temp->next;

    }

    // printing the result.
    if(found = true){
        cout << "The value was found in the linked list  and updated.";

    }
    else{
        cout << "the value was not found in the linked list and hence can not be updated.";
    }

    // printing the linked list.
    temp  = head;
    while(temp != NULL){
        cout << temp ->data << "->";
        temp = temp->next;
    }

    cout << "NULL";
    return 0;
}
