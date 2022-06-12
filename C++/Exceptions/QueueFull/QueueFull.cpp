// QueueFull exception implementation
//
// Author: Brian Horner
// Edit History:
// 6/12/2022 - Initial Version

#include "QueueFull.h"

QueueFull::QueueFull(const std::string &error): RuntimeException(error) {}
QueueFull::~QueueFull() {}
