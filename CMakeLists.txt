cmake_minimum_required(VERSION 3.20)
project(DataStructures_Algorithms)

set(CMAKE_CXX_STANDARD 20)

add_executable(DataStructures_Algorithms main.cpp

 # C++ Algorithms
        C++/Algorithms/SumOfArray.cpp C++/Algorithms/ReverseArray.cpp
        C++/Algorithms/ReverseArray.cpp C++/Algorithms/BubbleSort.cpp
        C++/Algorithms/RecursiveFactorial.cpp C++/Algorithms/RecursiveFibonacci.cpp
        C++/Algorithms/InsertionSort.cpp C++/Algorithms/SortedEntryDynamicArray.cpp

# C++ Data Structures

        # Dynamic Array
        C++/Data_Structures/DynamicArray/DynamicArray.cpp

        # Singly Linked List
        C++/Data_Structures/Singly_Linked_List/SinglyLinkedList.cpp
        # Doubly Linked List

        #Circularly Linked List
        C++/Data_Structures/Circularly_Linked_List/CircularlyLinkedList.cpp

# Python Algorithms

# Python Data Structures

        )

