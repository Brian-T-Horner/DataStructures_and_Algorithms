// Node List class implementation
//
// Author: Brian Horner
// Edit History:
// 6/12/2022 - Initial Version
// 6/12/2022 - Added template for copy constructor, assignment operator and
// equality operator

#ifndef NodeList_H
#define NodeList_H
#include "Iterator.h"

template <typename T>
class NodeList {
public:
    NodeList();
    NodeList(NodeList<T> const & oldList);
    NodeList<T>& operator=(NodeList<T> const & oldList);
    bool operator==(NodeList<T> const & comparisonList);
    ~NodeList();
    int size() const;
    bool empty() const;
    Iterator<T> begin() const;
    Iterator<T> end() const;
    void insertFront(const T& e);
    void insertBack(const T& e);
    void insert(const Iterator<T>& p, const T& e);
    void eraseFront();
    void eraseBack();
    void erase(const Iterator<T>& p);
private:
    int numElements;
    LNode<T>* header;
    LNode<T>* trailer;
};


#endif
