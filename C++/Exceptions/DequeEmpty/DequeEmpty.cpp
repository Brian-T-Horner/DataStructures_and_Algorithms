// DequeEmpty exception implementation
//
// Author: Brian Horner
// Edit History:
// 6/12/2022 Initial Version

#include "DequeEmpty.h"

DequeEmpty::DequeEmpty(const std::string &error): RuntimeException(error) {}
DequeEmpty::~DequeEmpty() {}