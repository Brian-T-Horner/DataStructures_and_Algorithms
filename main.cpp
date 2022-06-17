#include <iostream>

// Exception Includes
#include "C++/Exceptions/IndexOutOfBounds/IndexOutOfBounds.h"
#include "C++/Exceptions/Runtime/RuntimeException.h"
#include "C++/Exceptions/QueueEmpty/QueueEmpty.h"
#include "C++/Exceptions/QueueFull/QueueFull.h"
#include "C++/Exceptions/DequeEmpty/DequeEmpty.h"
#include "C++/Exceptions/StackEmpty/StackEmpty.h"
#include "C++/Exceptions/StackFull/StackFull.h"


// Data Structures Includes
#include "C++/Data_Structures/ArrayStack/ArrayStack.h"
#include "C++/Data_Structures/ArrayVector/ArrayVector.h"
#include "C++/Data_Structures/Circularly_Linked_List/CircularlyLinkedList.h"
#include "C++/Data_Structures/CircularQueue/CircularQueue.h"
#include "C++/Data_Structures/DequeStack/DequeStack.h"
#include "C++/Data_Structures/Doubly_Linked_List/DoublyLinkedList.h"
#include "C++/Data_Structures/DynamicArray/DynamicArray.h"
#include "C++/Data_Structures/LinkedDeque/LinkedDeque.h"
#include "C++/Data_Structures/LinkedListStack/LinkedStack.h"
#include "C++/Data_Structures/Singly_Linked_List/SinglyLinkedList.h"
#include "C++/Data_Structures/TemplateQueue/TemplateQueue.h"

// Node List
#include "C++/Data_Structures/NodeList/NodeList.h"
#include "C++/Data_Structures/NodeList/LNode.h"
#include "C++/Data_Structures/NodeList/Iterator.h"


int main() {
    int x = 3;
    int y = 4;
    std::cout << "x: " << x << std::endl;
    std::cout << "x MEM: " << &x << std::endl;
    std::cout << "y: " <<y<<std::endl;
    std::cout << "y MEM: " <<&y<<std::endl;
    y = x;
    std::cout << "x: " << x << std::endl;
    std::cout << "x MEM:" <<&x<<std::endl;
    std::cout << "y: " <<y << std::endl;
    std::cout << "y MEM: " <<&y<<std::endl;
    x = 7;
    std::cout << "x: " << x << std::endl;
    std::cout << "x MEM: " <<&x<<std::endl;
    std::cout << "y: " <<y << std::endl;
    std::cout << "y MEM: " <<&y<<std::endl;
//    std::cout << "Hello, World!" << std::endl;
    return 0;
}
