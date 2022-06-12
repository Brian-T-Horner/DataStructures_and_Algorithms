cmake_minimum_required(VERSION 3.20)
project(DataStructures_Algorithms)

set(CMAKE_CXX_STANDARD 20)

add_executable(DataStructures_Algorithms main.cpp
# Exceptions
        C++/Exceptions/Runtime/RuntimeException.cpp
        C++/Exceptions/IndexOutOfBounds/IndexOutOfBounds.cpp
        C++/Exceptions/QueueEmpty/QueueEmpty.cpp
        C++/Exceptions/QueueFull/QueueFull.cpp
        C++/Exceptions/DequeEmpty/DequeEmpty.cpp
        C++/Exceptions/StackEmpty/StackEmpty.cpp
        C++/Exceptions/StackFull/StackFull.cpp


 # C++ Algorithms
        C++/Algorithms/SumOfArray.cpp C++/Algorithms/ReverseArray.cpp
        C++/Algorithms/ReverseArray.cpp C++/Algorithms/BubbleSort.cpp
        C++/Algorithms/RecursiveFactorial.cpp C++/Algorithms/RecursiveFibonacci.cpp
        C++/Algorithms/InsertionSort.cpp C++/Algorithms/SortedEntryDynamicArray.cpp
        C++/Algorithms/isUnique.cpp C++/Algorithms/prefixAverages.cpp
        C++/Algorithms/power.cpp C++/Algorithms/arrayFind.cpp
        C++/Algorithms/ReverseDLinkedList.cpp C++/Algorithms/reverseVectorWithStack.cpp
        C++/Algorithms/VectorSum.cpp


# C++ Data Structures

        # Template ArrayStack
        C++/Data_Structures/ArrayStack/ArrayStack.cpp

        # Linked List Stack
        C++/Data_Structures/LinkedListStack/LinkedStack.cpp

        # Dynamic Array
        C++/Data_Structures/DynamicArray/DynamicArray.cpp

        # Singly Linked List
        C++/Data_Structures/Singly_Linked_List/SinglyLinkedList.cpp
        C++/Data_Structures/Singly_Linked_List/SNode.cpp

        # Doubly Linked List
        C++/Data_Structures/Doubly_Linked_List/DoublyLinkedList.cpp
        C++/Data_Structures/Doubly_Linked_List/DNode.cpp

        # Circularly Linked List
        C++/Data_Structures/Circularly_Linked_List/CircularlyLinkedList.cpp
        C++/Data_Structures/Circularly_Linked_List/CNode.cpp

        # Template Queue
        C++/Data_Structures/TemplateQueue/TemplateQueue.cpp

        # Circular Linked List Queue
        C++/Data_Structures/CircularQueue/CircularQueue.cpp

        # Doubly Linked List Deque
        C++/Data_Structures/LinkedDeque/LinkedDeque.cpp

        # Stack w/ deque wrapper
        C++/Data_Structures/DequeStack/DequeStack.cpp

        # Extendable Array Vector
        C++/Data_Structures/ArrayVector/ArrayVector.cpp

# Python Algorithms

# Python Data Structures

        )

