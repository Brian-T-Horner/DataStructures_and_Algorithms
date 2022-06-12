// Node class specification for NodeList
//
// Author: Brian Horner
// Edit History:
// 6/12/2022 - Initial Version

#ifndef LNode_H
#define LNode_H

template <typename T>
class LNode {
public:
    LNode();
    ~LNode();
private:
    T data;
    LNode<T>* next;
    LNode<T>* prev;
    template <typename B> friend class Iterator;
    template <typename C> friend class NodeList;

};


#endif
