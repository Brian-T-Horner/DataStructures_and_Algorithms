cmake_minimum_required(VERSION 3.20)
project(DataStructures_Algorithms)

set(CMAKE_CXX_STANDARD 20)

add_executable(DataStructures_Algorithms main.cpp

 # C++ Algorithms
        C++/Algorithms/SumOfArray.cpp C++/Algorithms/ReverseArray.cpp
        C++/Algorithms/ReverseArray.cpp C++/Algorithms/BubbleSort.cpp
        C++/Algorithms/RecursiveFactorial.cpp C++/Algorithms/RecursiveFibonacci.cpp
        C++/Algorithms/InsertionSort.cpp C++/Algorithms/SortedEntryDynamicArray.cpp
        C++/Algorithms/isUnique.cpp C++/Algorithms/prefixAverages.cpp
        C++/Algorithms/power.cpp

# C++ Data Structures

        # Dynamic Array
        C++/Data_Structures/DynamicArray/DynamicArray.cpp

        # Singly Linked List
        C++/Data_Structures/Singly_Linked_List/SinglyLinkedList.cpp
        C++/Data_Structures/Singly_Linked_List/SNode.cpp

        # Doubly Linked List
        C++/Data_Structures/Doubly_Linked_List/DoublyLinkedList.cpp
        C++/Data_Structures/Doubly_Linked_List/DNode.cpp

        #Circularly Linked List
        C++/Data_Structures/Circularly_Linked_List

# Python Algorithms

# Python Data Structures

        )

