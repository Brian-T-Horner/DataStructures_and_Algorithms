// DequeEmpty exception specification
//
// Author: Brian Horner
// Edit History:
// 6/12/2022 - Initial Version

#ifndef DequeEmpty_H
#define DequeEmpty_H

#include "../Runtime/RuntimeException.h"

class DequeEmpty: public RuntimeException {
public:
    DequeEmpty(const std::string& error);
    ~DequeEmpty();

};


#endif
