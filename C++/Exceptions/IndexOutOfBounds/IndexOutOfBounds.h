// IndexOutOfBounds exception specification
//
// Author: Brian Horner
// Edit History:
// 6/12/2022 - Initial Version

#ifndef IndexOutOfBounds_H
#define IndexOutOfBounds_H
#include "../Runtime/RuntimeException.h"

class IndexOutOfBounds:public RuntimeException {
public:
    IndexOutOfBounds(const std::string& error);
    ~IndexOutOfBounds();
};


#endif
