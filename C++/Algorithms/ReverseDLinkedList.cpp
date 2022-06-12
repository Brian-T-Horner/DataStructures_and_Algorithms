// Reverse Doubly Linked List
//
// Author: Brian Horner
// Edit History:
// 6/11/2022 - Initial Version

#include "../Data_Structures/Doubly_Linked_List/DoublyLinkedList.h"


// Reverses the contents of a doubly linked list current
template <typename T>
void listReverse(DoublyLinkedList<T> current){
    DoublyLinkedList<T> temp;
    while(!current.empty()){
        T element = current.front();
        current.removeFront();
        temp.addFront(element);
    }
    while (!temp.empty()){
        T element = temp.front();
        temp.removeFront();
        current.addBack(element);
    }
}