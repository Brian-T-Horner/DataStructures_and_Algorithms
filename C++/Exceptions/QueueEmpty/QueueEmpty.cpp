// QueueEmpty exception implementation
//
// Author: Brian Horner
// Edit History:
// 6/12/2022 - Initial Version

#include "QueueEmpty.h"
QueueEmpty::QueueEmpty(const std::string &error): RuntimeException(error) {}
QueueEmpty::~QueueEmpty() {}
