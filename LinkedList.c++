#include <iostream>
using namespace std;

/* Linked List
First implement a class to store to the value and the address of the next element.
Nodes store two things ; 1.the value 2. the address of the next elment
*/
class Node
{
public:
    int value;
    Node *Next;
};
// creating a function to check if it works
//  This function just prints the values
// the function takes the first element that is the head
// and then increaments the Next or pointer value

void printNode(Node *n)
{
    while (n != NULL)
    {
        cout << n->value << endl;
        n = n->Next;
    }
}

int main()
{
    //  create new instances or objects of the class
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    // set the values of each instance to a value and set it's next
    //  to point to the next element
    //  most importantly let the last element point to NULL sice it
    // points to nothing
    head->value = 11;
    head->Next = second;
    second->value = 12;
    second->Next = third;
    third->value = 13;
    third->Next = NULL;
    printNode(head);
    return 0;
}