// IndexOutOfBounds exception implementation
//
// Author: Brian Horner
// Edit History:
// 6/12/2022 -Initial Version

#include "IndexOutOfBounds.h"

IndexOutOfBounds::IndexOutOfBounds(const std::string &error):
RuntimeException(error){}
IndexOutOfBounds::~IndexOutOfBounds() {}

