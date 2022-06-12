// StackEmpty exception specification
//
// Author: Brian Horner
// Edit History:
// 6/12/2022 Initial Version


#ifndef StackEmpty_H
#define StackEmpty_H
#include "../Runtime/RuntimeException.h"

class StackEmpty:public RuntimeException {
public:
    StackEmpty(const std::string& error);
    ~StackEmpty();

};


#endif
