// QueueEmpty exception implementation
//
// Author: Brian Horner
// Edit History:
// 6/12/2022 - Initial Version

#ifndef QueueFull_H
#define QueueFull_H

#include "../Runtime/RuntimeException.h"

class QueueFull:public RuntimeException{
public:
    QueueFull(const std::string& error);
    ~QueueFull();
};


#endif
