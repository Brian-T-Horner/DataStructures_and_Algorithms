// Iterator class specification for Node List
//
// Author: Brian Horner
// Edit History:
// 6/12/2022 - Initial Version

#ifndef Iterator_H
#define Iterator_H

#include "LNode.h"

template <typename T>
class Iterator {
    ~Iterator();
    T& operator*();
    bool operator==(const Iterator& p) const;
    bool operator!=(const Iterator& p ) const;
    Iterator& operator++();
    Iterator& operator--();
    template <typename B> friend class NodeList;
private:
    LNode<T>* v;
    Iterator(LNode<T>* u);


};


#endif
