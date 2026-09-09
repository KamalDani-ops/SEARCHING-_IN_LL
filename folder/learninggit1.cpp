//write a program to perform searching in linked list;
#include<iostream>
using namespace std; 

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

    // SEARCHING .

    Node*temp = head;

    int key;
    cout << "enter a key : ";
    cin >> key;

    bool found = false;

    while(temp != NULL ){
        if(temp->data == key){
            found = true;
            break ;
        }
        temp = temp->next;

    }

    // printing the result.
    if(found = true){
        cout << "The value is found in the linked list.";

    }
    else{
        cout << "the value is not found in the linked list.";
    }

    return 0 ;



}
