// StackFull exception implementation
//
// Author: Brian Horner
// Edit History:
// 6/12/2022 - Initial Version

#include "StackFull.h"

StackFull::StackFull(const std::string &error): RuntimeException(error) {}
StackFull::~StackFull() {}
