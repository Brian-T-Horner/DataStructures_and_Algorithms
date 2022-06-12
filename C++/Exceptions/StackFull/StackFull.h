// StackFull exception specification
//
// Author: Brian Horner
// Edit History:
// 6/12/2022 - Initial Version

#ifndef StackFull_H
#define StackFull_H
#include "../Runtime/RuntimeException.h"


class StackFull:public RuntimeException {
public:
    StackFull(const std::string& error);
    ~StackFull();
};


#endif
