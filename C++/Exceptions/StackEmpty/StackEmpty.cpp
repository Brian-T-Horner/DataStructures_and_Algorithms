// StackEmpty exception implementation
//
// Author: Brian Horner
// Edit History:
// 6/12/2022 Initial Version

#include "StackEmpty.h"

StackEmpty::StackEmpty(const std::string &error): RuntimeException(error) {}
StackEmpty::~StackEmpty() {}
