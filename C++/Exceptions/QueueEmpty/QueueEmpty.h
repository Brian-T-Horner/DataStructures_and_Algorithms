// QueueEmpty exception specification
//
// Author: Brian Horner
// Edit History:
// 6/12/2022 - Initial Version

#ifndef QueueEmpty_H
#define QueueEmpty_H
#include "../Runtime/RuntimeException.h"


class QueueEmpty:public RuntimeException {
public:
    QueueEmpty(const std::string& error);
    ~QueueEmpty();
};


#endif
